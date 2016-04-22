  // Model constructor Screen.

var namespace = namespace ||  {};
namespace.models = {};

(function($) {

////////////
// Screen //
////////////

namespace.models.Screen = Backbone.Model.extend({
  defaults: {
    chosen: false,
    title: "",
    description: "",
    buttons: [],
    Color: "#EEEEEE",
    order: null
  },

  initialize: function() {

    this.on('change:current', function(){

      namespace.views.wizard.remove();
      // Initialize wizard again.
      console.log("change event");
      Backbone.trigger("current:update");
      $(".wizard__content-block").html(namespace.views.wizard.render().el);

    });

  },


});


/////////////
// Section //
/////////////

namespace.models.Section = Backbone.Model.extend({});

})(jQuery);