var namespace = namespace || {};
namespace.views = {};

// User moustachs style templates.
_.templateSettings = {
  interpolate: /\{\{(.+?)\}\}/g

};


(function($) {
  $( document ).ready(function() {

////////////////
// Controller //
////////////////

namespace.controller = {

  selected: false,

  toggleSelected: function() {
    this.selected = !this.selected;
  },

  chosen: [],

  nextId: undefined

}


////////////
// Wizard //
////////////

namespace.views.Wizard = Backbone.View.extend({
  el: ".wizard__content-block",
  className: "wiz",

  screenTemplate: _.template('<div class="wizard__header">{{section.tid}} / {{Name}}</div><div class="wizard__header-line" /> <h1 class="wizard__question">{{ title }}</h1> <div class="wizard__tip">{{Description}}</div>'),

  render: function() {

    $("#wizard").css("background", this.model.get("Primary Color"));

    console.log("Model", this.model);
    switch (this.model.get("screen-type")) {
    case "start":
      console.log("APP: Start");
      this.$el.html(this.screenTemplate(this.model.toJSON()));
      namespace.controller.nextId = this.model.get("buttons")[0]["Destination Screen"]["target_id"];
      new namespace.views.NavNext();
      break;
    case "section":
      console.log("APP: Section");
      this.$el.html(this.screenTemplate(this.model.toJSON()));
      namespace.controller.nextId = this.model.get("buttons")[0]["Destination Screen"]["target_id"];
      new namespace.views.NavNext();
      break;
    case "question":
      console.log("APP: question");
     this.$el.html(this.screenTemplate(this.model.toJSON()));
      var buttonsView = new namespace.views.Buttons({ model: this.model });
      buttonsView.render();
      new namespace.views.Nav();
      break;
    default:
      console.log("APP: No screen type defined");
      break;
    }

    return this;
  }

});


/////////////
// Buttons //
/////////////

namespace.views.Buttons = Backbone.View.extend({
  el: ".wizard__buttons",

  render: function() {
    this.$el.find("a").remove(); // Remove any buttons from before.
    var buttons = this.model.get("buttons");
      if (buttons.length > 0) {
        _.each(buttons, function(b, index) {
          if (b.Style["#markup"] === "Button") {
            var button =  new namespace.views.Button({
              button: b, model: this.model,
              index: index
            });
            console.log("length", index);
            this.$el.append(button.render().el);
          }
          if (b.Style["#markup"] === "Next") {
            namespace.controller.selected = true;
            namespace.controller.nextId =  b["Destination Screen"]["target_id"];
          }
        }, this);
      }
    return this;
  }
});

//////////////
// A Button //
//////////////

namespace.views.Button = Backbone.View.extend({

  tagName: "a",

  className: "wizard__button",

  initialize: function(options) {
    this.options = options || {};
    this.button = this.options.button;
    this.index = this.options.index;
  },

  events: {
    "click": "markSelected"
  },

  markSelected: function(event) {
    namespace.controller.toggleSelected();
    if (namespace.controller.selected) {
      namespace.controller.bid =  $(event.currentTarget).attr("id");
     this.$el.addClass("wizard__button--selected");
    } else {
     $(".wizard__button").removeClass("wizard__button--selected");
    }
    event.preventDefault();
},

  render: function() {
    this.$el.attr("href", "#");
    this.$el.attr("id", "button-id-" + this.index);
    this.$el.text(this.button["Button Title"]["#markup"]);
    return this;
  }
});

/////////
// Nav //
/////////

namespace.views.Nav = Backbone.View.extend({
  el: ".wizard__nav",

  initialize: function() {
    this.$el.find(".wizard__arrow-up").show();
  },

  events:  {
    "click .wizard__arrow-up": "backArrowClick",
    "click .wizard__arrow-down": "forwardArrowClick"
  },

  backArrowClick: function(event) {
    namespace.collections.screens.prev();
    event.preventDefault();
  },

  forwardArrowClick: function(event) {
    console.log("SELECT", namespace.controller.selected);
    console.log("BID: ", namespace.controller.bid);
    if (namespace.controller.selected) {
    namespace.controller.nextId = namespace.views.wizard.model.get("buttons")[namespace.controller.bid.charAt(namespace.controller.bid.length - 1)]["Destination Screen"]["target_id"];
      console.log("NEXT ID", namespace.controller.nextId);
      namespace.collections.screens.next(namespace.controller.bid);
    }
    event.preventDefault();
  }

});

//////////////
// Nav Next //
//////////////

namespace.views.NavNext = Backbone.View.extend({
  el: ".wizard__nav",

  initialize: function() {
    this.$el.find(".wizard__arrow-up").hide();
    this.$el.find(".wizard__arrow-down");
  },
  events:  {
    "click .wizard__arrow-down": "forwardArrowClick"
  },

  forwardArrowClick: function(event) {
    namespace.collections.screens.next();
    event.preventDefault();
  }

});



////////////////////////
// // Results View /////
////////////////////////

namespace.views.ResultsView = Backbone.View.extend({
  el: ".wizard__content--results-list",

  initialize: function() {
    this.$el.append("<h5>Results</h5>");
    var results = [];
    results = namespace.collections.screens.getResults();
    console.log(results);
    _.each(results, function(r) {
      var resultView = new namespace.views.Result({result: r});
      this.$el.append(resultView.render().el);
    }, this);

  }
});

////////////
// Result //
////////////

namespace.views.Result = Backbone.View.extend({

  tagName: "li",

  initialize: function(options) {
    this.result = options.result;
  },

  render: function() {
    this.$el.html(this.result);
    return this;
  }


});


//////////////////
// Progress Bar //
//////////////////

namespace.views.ProgressBar = Backbone.View.extend({

  el: ".wizard__progress-bar",

  initialize: function() {
    this.$el.addClass("section-1");
    Backbone.on("current:update", this.changeIndicator, this);
  },

  changeIndicator: function() {
    this.$el.removeClass(function(index, css) {
      return (css.match (/\bsection-\S+/g) || []).join(' ');
    });
    this.$el.addClass("section-" + namespace.views.wizard.model.get("section").tid);
  },

  render: function() {
    return this;
  }

});


/////////////////////
// Progress Drawer //
/////////////////////

namespace.views.ProgressDrawer = Backbone.View.extend({

  el: ".wizard__progress-drawer",

  initialize: function() {
    Backbone.on("current:update", this.render, this);
//    this.$el.hide();
    this.$el.css("background", "#ccc");
  },

  render: function() {
    this.$el.find("ul").remove();
    this.$el.find("li").remove();

    var progress = namespace.collections.sections.models;

    _.each(progress, function(section) {
      var s = new namespace.views.Section({model: section}).render().el;
      this.$el.append(s);
    }, this);

    return this;
  }

});


namespace.views.Section = Backbone.View.extend({

  tagName: "li",

  template: _.template("<h5>{{name}}</h5>"),

  render: function() {
    this.$el.append(this.template({name: this.model.get("title")}));
    var sectionSteps = new namespace.views.SectionSteps({sectionId: this.model.get("id")}).render().el;
    this.$el.append(sectionSteps);
    return this;
  }

});




namespace.views.SectionSteps = Backbone.View.extend({

  tagName: "ul",

  initialize: function(options) {
    this.options = options || {};
    this.sectionId = this.options.sectionId;
  },

  render:function() {

    // @TODO move this method into the collection.
    // @TODO Sort screen by section ID.
    var screens = _.filter(namespace.collections.screens.models, function(s){
      return s.attributes.section.tid === this.sectionId;
    }, this);

    var graphic;
    _.each(screens, function(s) {
      if (s.get("Nid") === namespace.views.wizard.model.get("Nid")) {
        graphic = " O ";
      } else {
        graphic = " | ";
      }
      var sectionStepItem = new namespace.views.SectionStepItem({graphic: graphic}).render().el;
      this.$el.append(sectionStepItem);
    }, this );
    return this;
  }
});



namespace.views.SectionStepItem = Backbone.View.extend({
  tagName: "li",

  initialize: function(options) {
    this.options = options || {};
    this.graphic = this.options.graphic;
  },

  render: function() {
    this.$el.html(this.graphic);
    return this;
  }
});

  });

})(jQuery);
