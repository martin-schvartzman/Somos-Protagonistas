<center>
<div id="main">
	<div id="cabecera">
		<div id="botones">
			<a href="/"><div class="boton" <?php if($category=="home")echo 'id="selectedbutton"'; ?>><font>H</font>ome</div></a>
			<a href="/?cat=nosotros"><div class="boton" <?php if($category=="nosotros")echo 'id="selectedbutton"'; ?>><font>A</font>cerca de nosotros</div></a>
			<a href="/?cat=episodios"><div class="boton" <?php if($category=="episodios")echo 'id="selectedbutton"'; ?>><font>E</font>pisodios</div></a>
			<a href="/?cat=invitados"><div class="boton" <?php if($category=="invitados")echo 'id="selectedbutton"'; ?>><font>I</font>nvitados</div></a>
			<a href="/?cat=contacto"><div class="boton" <?php if($category=="contacto")echo 'id="selectedbutton"'; ?>><font>C</font>ontacto</div></a>
		</div>
	</div>
	<div id="contenido"><?php include($diseno);?></div>
	<div id="footer">SOMOS PROTAGONISTAS</div>
</div>	
</center>