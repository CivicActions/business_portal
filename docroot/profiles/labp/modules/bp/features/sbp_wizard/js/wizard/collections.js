/////////////////
// Collections //
/////////////////

var wiz = wiz ||  {};
wiz.collections = {}


////////////////
// Chosen     //
////////////////

wiz.collections.Chosen = Backbone.Collection.extend ({

  model: wiz.models.Screen,
  selected: false,
  toggleSelected: function() {
    this.selected = !this.selected;
  },

  getResults: function() {
    return _.chain(this.models).map(function(m) {
      if (m.get("buttons") !== undefined) {
        if (m.get("chosenBid") !== undefined) {
          if (m.get("buttons")[m.get("chosenBid")]["Button Result Text"] !== undefined) {
            return m.get("buttons")[m.get("chosenBid")]["Button Result Text"]["#markup"];
          }
        }
      }
    }, this).filter(_.identity).value();
  }
});

wiz.collections.chosen = new wiz.collections.Chosen({});


wiz.collections.chosen.on("add", function(m) {

  // Remove any existing wizard dom and events.

  // Trigger rendering of the newly added model.
   var model = this.find({
     Nid: m.get("Nid")
   });
  var view = new wiz.views.Wizard({
    model: model
  });

  wiz.instance.goto(view);

  // Let others know about it.
  // Backbone.on("screen:add", this.render, this);

});


wiz.collections.Screens = Backbone.Collection.extend({

  model: wiz.models.Screen,

  url: "/api/json/business-portal-wizard",

});


//////////////
// Sections //
//////////////

wiz.collections.Sections = Backbone.Collection.extend({
  model: wiz.models.Section

});

wiz.collections.sections = new wiz.collections.Sections();
