<div id="amepisodio">
<center>
	<form action="/?cat=abmepisodios" method="POST">
		<input type="hidden" name="id" value="<?php if(!$new)echo $rub->id; else echo "0"; ?>"/>
		<table style="float:left;">
			<tr>
				<td>Fecha:</td><td><input type="text" id="datepicker" name="fecha" value="<?php if(!$new)echo $rub->fecha; ?>"/></td>
			</tr>
			<tr>
				<td>Video:</td><td><input type="text" name="video" value="<?php if(!$new)echo $rub->video; ?>"/></td>
			</tr>
			<tr>
				<td>Empresa:</td><td>
				<select name="empresa">
					<?php foreach($rubros as $r){?>
					<option value="<?php echo $r->id; ?>"><?php echo $r->nombre; ?></option>
					<?php } ?>
				</select></td>
			</tr>
			<tr>
				<td colspan="2"><textarea name="descripcion"><?php if(!$new)echo $rub->descripcion; ?></textarea></td>
			</tr>
			<tr>
			<td><input type="submit" name="<?php if(!$new)echo "edit"; else echo "new"; ?>" value="Enviar"/></td><td></td>
			</tr>
		</table>
	</form>
</center>
</div>