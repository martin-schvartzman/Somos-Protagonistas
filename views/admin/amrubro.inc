<div id="amrubro">
<center>
	<form action="/?cat=abmrubros" method="POST">
		<input type="hidden" name="id" value="<?php if(!$new)echo $rub->id; else echo "0"; ?>"/>
		<table style="float:left;">
			<tr>
				<td>Nombre:</td><td><input type="text" name="nombre" value="<?php if(!$new)echo $rub->nombre; ?>"/></td>
			</tr>
			<tr>
			<td><input type="submit" name="<?php if(!$new)echo "edit"; else echo "new"; ?>" value="Enviar"/></td><td></td>
			</tr>
		</table>
	</form>
</center>
</div>