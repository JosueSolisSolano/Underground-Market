// Manatí Base Theme JS functions
(function($) {

var btn_menu = $('.expanded');
console.log(btn_menu);

btn_menu.click(function(){
  alert("PUTA!!!");
  var submenu = $('.expanded > ul');
  $('.expanded > ul').toggle('expand-menu');
});

})(jQuery);
