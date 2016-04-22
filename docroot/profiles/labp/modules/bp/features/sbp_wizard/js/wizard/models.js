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
    order: null,
    next: undefined
  },

  initialize: function() {
    this.setNextScreen();
  },

  setNextScreen: function() {
    if (this.get("buttons").length === 2) {
      var nid = this.get("buttons")[0]["Destination Screen"]["target_id"];
      this.set({next: nid});
    }
  }
});


/////////////
// Section //
/////////////

namespace.models.Section = Backbone.Model.extend({});

})(jQuery);
