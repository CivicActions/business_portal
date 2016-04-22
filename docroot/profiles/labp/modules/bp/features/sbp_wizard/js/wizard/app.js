
var namespace = namespace || {};

(function($) {

  $( document ).ready(function() {

    // Initialize collection.
    namespace.collections.screens = new namespace.collections.Screens();

    namespace.collections.screens.fetch({

      async: false,

      success: function(data) {

        // Add the start screen to the chosen collection.
        var m =  namespace.collections.screens.find({"screen-type": "start"}, this);
        if (m === undefined) {
          console.log("APP ERROR: You will need a start screen defined.");
          return;
        } else {
          namespace.collections.chosen.add(m);
        }

        // Initialize the Wizard for rendering with the first model.
        // namespace.views.wizard = new namespace.views.Wizard({
        //   model: m
        // });

        // var screen = {nid: m.get("Nid"), bid: undefined};
        // namespace.controller.chosen.push(screen);
        // namespace.views.wizard.render();

        // Add sections models to the sections collection.
        _.each(data.models, function(screen) {
          var section = new namespace.models.Section({id: screen.get("section").tid, title: screen.get("Name")});
          namespace.collections.sections.add(section);
        });

        // Initialize the Progress bar and progress draw.
        new namespace.views.ProgressBar().render().el;
        new namespace.views.ProgressDrawer().render().el;

      },

      error: function(collection, response, options) {
        console.log("Fetch error: ")
      }

    });
  });
})(jQuery);
