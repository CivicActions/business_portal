(function($) {
  $( document ).ready(function(){
    $('body').addClass('wizard-page');
    var hostnames = ["labusinessportal.dev2-cityofla.acsitefactory.com", "business.lacity.org", "labp.cityofla.acsitefactory.com"];
    var ishosted = false;
    for (var ind = 0; ind < hostnames.length; ind++) {
      if (hostnames[ind] == window.location.hostname) {
        ishosted = true;
      }
    }
    if (ishosted) {
      var logofilename = "/profiles/labp/themes/la/labusinessportaltheme/logo-dark.png";
    } else {
      var logofilename = "/profiles/labp/themes/la/lasbptheme/logo-dark.png";
    }
    $('.header__logo img').attr("src",logofilename);
  });
})(jQuery);
