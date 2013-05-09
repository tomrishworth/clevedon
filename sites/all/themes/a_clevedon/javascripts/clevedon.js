var $ = jQuery;
jQuery(document).ready(function($){
  $(".menu-block-3 .menu").flexNav();
  $('.form-type-bef-link a').each(function(){
    $(this).wrapInner("<span></span>");
  });
  $('.view-accordion-slider').easyAccordion({ 
			autoStart: true, 
			slideInterval: 30000,
			pauseOnHover: true,
			actOnHover: false,
			continuous: true,
			slideNum:false
	});
});


