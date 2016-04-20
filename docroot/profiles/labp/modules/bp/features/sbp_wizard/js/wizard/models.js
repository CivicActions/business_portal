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
      namespace.views.wizard.render();
      Backbone.trigger("current:update");
    });
  },
});


/////////////
// Section //
/////////////

namespace.models.Section = Backbone.Model.extend({});

})(jQuery);
