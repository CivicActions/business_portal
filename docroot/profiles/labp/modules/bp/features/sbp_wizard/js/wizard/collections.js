/////////////////
// Collections //
/////////////////

var namespace = namespace ||  {};
namespace.collections = {}


////////////////
// Chosen     //
////////////////

namespace.collections.Chosen = Backbone.Collection.extend ({

  model: namespace.models.Screen,
  selected: false,
  toggleSelected: function() {
    this.selected = !this.selected;
  },
});

namespace.collections.chosen = new namespace.collections.Chosen();

namespace.collections.chosen.on("add", function(m) {

  // Trigger rendering of the newly added model.
   var model = this.find({
     Nid: m.get("Nid")
   });

  namespace.views.wizard = new namespace.views.Wizard({
    model: model
  });
  namespace.views.wizard.render();
});


namespace.collections.Screens = Backbone.Collection.extend({

  model: namespace.models.Screen,

  url: "/api/json/business-portal-wizard",

  // getResults: function() {
  //   return _.map(namespace.controller.chosen, function(s) {
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

namespace.collections.Sections = Backbone.Collection.extend({
  model: namespace.models.Section

});

namespace.collections.sections = new namespace.collections.Sections();
