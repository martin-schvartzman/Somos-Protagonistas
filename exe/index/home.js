$(document).ready(function (){

	$('.ytthumb').click(function (){
		var vid=$(this).attr("content");
		//alert(vid);
		$("#ytvideo").attr("src","http://www.youtube.com/embed/"+vid+"?rel=0");
	});

});