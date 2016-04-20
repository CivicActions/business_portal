
var namespace = namespace || {};

(function($) {

  ///////////////////////////////////////////
  // Create backbone collection "screens". //
  ///////////////////////////////////////////

namespace.collections.screens = new namespace.collections.Screens();

namespace.collections.screens.fetch({

  async: false,

  success: function(data) {

    // Initialize the Wizard for rendering with the first model.
    namespace.views.wizard = new namespace.views.Wizard({
      model: namespace.collections.screens.find({"screen-type": "start"}, this)
    });



    namespace.views.wizard.model.set({
      current: true,
      first: true,
      chosen: true});

    // Add sections models to the sections collection.
    _.each(data.models, function(screen) {
     var section = new namespace.models.Section({id: screen.get("section").tid, title: screen.get("Name")});
      namespace.collections.sections.add(section);
    });

    // Initialize the Progress bar and progress draw.
    new namespace.views.ProgressBar().render().el;
    new namespace.views.ProgressDrawer().render().el;

    // Initialize nav.
    new namespace.views.Nav({});
  },

  error: function(collection, response, options) {
    console.log("Fetch error: ")
  }

});

})(jQuery);
