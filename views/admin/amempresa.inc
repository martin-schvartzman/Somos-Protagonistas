<div id="amempresa">
<center>
	<form action="/?cat=abmempresas" method="POST">
		<input type="hidden" name="id" value="<?php if(!$new)echo $rub->id; else echo "0"; ?>"/>
		<table style="float:left;">
			<tr>
				<td>Nombre:</td><td><input type="text" name="nombre" value="<?php if(!$new)echo $rub->nombre; ?>"/></td>
			</tr>
			<tr>
				<td>Rubro:</td><td>
				<select name="rubro">
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