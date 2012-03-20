<center>
<div id="main">
	<div id="banner">	
	</div>
	<div id="botonera">
		<?php if($log){ ?>
		<a href="/?cat=home"><div class="boton">HOME</div></a>
		<a href="/?cat=abmrubros"><div class="boton">RUBROS</div></a>
		<a href="/?cat=abmempresas"><div class="boton">EMPRESAS</div></a>
		<a href="/?cat=abmepisodios"><div class="boton">EPISODIOS</div></a>
		
		<a href="/?cat=unlog"><div id="logout">Log Out</div></a>
		<?php } ?>
	</div>
	<div id="contenido">
		<?php include($diseno); ?>
	</div>
	<div class="pie" id="pie">
  	<div class="textopie">SOMOS PROTAGONISTAS</div>
	<div class="textopie2"><a href="http://www.minimalweb.com.ar/" target="_blank">MINIMAL WEB</a></div>
</div>
</div>
<center>