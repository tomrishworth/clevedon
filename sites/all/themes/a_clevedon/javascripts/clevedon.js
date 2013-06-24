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

//var $ = jQuery;
//jQuery(document).ready(function($){
//  var container = document.querySelector('#facebook-container');
//  var msnry = new Masonry( container, {
  // options
//  columnWidth: 290,
//  itemSelector: '.news-item',
//  gutter: 10
//});
//});

var $container;

function triggerMasonry() {
  // don't proceed if $container has not been selected
  if ( !$container ) {
    return;
  }
  // init Masonry
  $container.masonry({
    columnWidth: 290,
    itemSelector: '.news-item',
    gutter: 15
  });
}
// trigger masonry on document ready
$(function(){
  $container = $('#facebook-container');
  triggerMasonry();
});
// trigger masonry when fonts have loaded
Typekit.load({
  active: triggerMasonry,
  inactive: triggerMasonry
});