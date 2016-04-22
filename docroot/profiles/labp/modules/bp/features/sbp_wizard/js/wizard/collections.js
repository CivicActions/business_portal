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

  prev: function() {
    if (this.length > 1) {
      // Drop last item.
      this.remove(this.last());
      namespace.views.wizard = new namespace.views.Wizard({
        model: this.last()
      });

      namespace.views.wizard.render();
    }


  }
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

  next: function() {

    // Add the models next screen to the chosen collection.


    // Push to chosen.
   // namespace.controller.chosen.push(obj);

    // Send to render.
    // namespace.views.wizard = new namespace.views.Wizard({
    //   model: model
    // });
    // namespace.views.wizard.render();

//    this.log();
  },

  getResults: function() {
    return _.map(namespace.controller.chosen, function(s) {
      var m;
      m = this.find({
        Nid: s
      });
      console.log("m", m);
      var bid = m.get("bid");
      return m.get("buttons")[bid.charAt(bid.length - 1)]["Button Result Text"]["#markup"];


    }, this);
  },

  log: function() {

    console.log("CHOSEN: ",
                _.pluck(namespace.collections.chosen, "nid")
               );
  },

});


//////////////
// Sections //
//////////////

namespace.collections.Sections = Backbone.Collection.extend({
  model: namespace.models.Section

});

namespace.collections.sections = new namespace.collections.Sections();
