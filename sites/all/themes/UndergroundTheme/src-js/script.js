// Manatí Base Theme JS functions
(function($) {
$(document).ready(function() {

var btn_menu = $('.expanded');

btn_menu.click(function(){
  $('.expanded > ul').toggle('expand-menu');
});

});

})(jQuery);

