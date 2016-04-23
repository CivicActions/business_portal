
var wiz = wiz || {};

(function($) {
  $( document ).ready(function() {

    // Initialize collection.
    wiz.collections.screens = new wiz.collections.Screens();
    wiz.collections.screens.fetch({

      async: false,

      success: function(data) {

        // Add the start screen to the chosen collection.
        var m =
wiz.collections.screens.find({"screen-type": "start"}, this);
        if (m === undefined) {
          console.log("APP ERROR: You will need a start screen defined.");
          return;
        } else {
          wiz.collections.chosen.add(m);
        }

        // Initialize the Wizard for rendering with the first model.
        // wiz.views.wizard = new wiz.views.Wizard({
        //   model: m
        // });

        // var screen = {nid: m.get("Nid"), bid: undefined};
        // wiz.controller.chosen.push(screen);
        // wiz.views.wizard.render();

        // Add sections models to the sections collection.
        _.each(data.models, function(screen) {
          var section = new wiz.models.Section({id: screen.get("section").tid, title: screen.get("Name")});
          wiz.collections.sections.add(section);
        });

        // Intialiize NAV.
        var nav = new wiz.views.Nav();
        nav.render();

        // Initialize the Progress bar and progress draw.
        new wiz.views.ProgressBar().render().el;
        new wiz.views.ProgressDrawer().render().el;

      },

      error: function(collection, response, options) {
        console.log("Fetch error: ")
      }

    });
  });
})(jQuery);
