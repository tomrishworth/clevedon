jQuery(document).ready(function($){

	/* prepend menu icon */
	$('#block-superfish-1').prepend('<div id="menu-icon">Menu</div>');
	
	/* toggle nav */
	$("#menu-icon").on("click", function(){
		$("#block-superfish-1 .content").slideToggle();
		$(this).toggleClass("active");
	});

});
