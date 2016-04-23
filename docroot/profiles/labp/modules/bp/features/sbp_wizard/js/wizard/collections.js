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
});

wiz.collections.chosen = new wiz.collections.Chosen();

wiz.collections.chosen.on("add", function(m) {

  // Trigger rendering of the newly added model.
   var model = this.find({
     Nid: m.get("Nid")
   });

  wiz.views.wizard = new wiz.views.Wizard({
    model: model
  });
  wiz.views.wizard.render();
});


wiz.collections.Screens = Backbone.Collection.extend({

  model: wiz.models.Screen,

  url: "/api/json/business-portal-wizard",

  // getResults: function() {
  //   return _.map(wiz.controller.chosen, function(s) {
  //     var m;
  //     m = this.find({
  //       Nid: s
  //     });
  //     console.log("m", m);
  //     var bid = m.get("bid");
  //     return m.get("buttons")[bid.charAt(bid.length - 1)]["Button Result Text"]["#markup"];
  //   }, this);
  // },

});


//////////////
// Sections //
//////////////

wiz.collections.Sections = Backbone.Collection.extend({
  model: wiz.models.Section

});

wiz.collections.sections = new wiz.collections.Sections();
