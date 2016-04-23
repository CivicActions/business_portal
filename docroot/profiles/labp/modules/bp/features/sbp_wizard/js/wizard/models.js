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
    next: undefined,
    chosenResultText: ""
  },

  initialize: function() {
    this.setNextScreen();
  },

  setNextScreen: function() {
    // Set the next screen, when we have that information available:
    switch (this.get("buttons").length) {
    case 1:
    case 2:
      if (this.get("buttons")[0]["Destination Screen"] !== undefined) {
      var nid = this.get("buttons")[0]["Destination Screen"]["target_id"];
      this.set({next: nid});
      }
      break;
    }
  }
});


/////////////
// Section //
/////////////

namespace.models.Section = Backbone.Model.extend({});

})(jQuery);
