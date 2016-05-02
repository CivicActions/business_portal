(function($) {
  $( document ).ready(function(){
    $('body').addClass('wizard-page');
    if (window.location.hostname != 'lacity.org' || window.location.hostname != 'acsitefactory.com') {
      var logofilename = "/profiles/labp/themes/la/labusinessportaltheme/logo-dark.png";
    } else {
      var logofilename = "/profiles/labp/themes/la/lasbptheme/logo-dark.png";
    }
    $('.header__logo img').attr("src",logofilename);
  });
})(jQuery);
