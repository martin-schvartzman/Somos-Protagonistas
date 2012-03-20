<div id="abmrubros">
<?php foreach($rub as $r){ ?>
	<div class="rubro">
		<div class="nombre"><?php echo $r->nombre; ?></div>
		<div class="delete">
			<form method="POST">
				<input type="hidden" name="id" value="<?php echo $r->id; ?>"/>
				<input class="del" type="submit" name="delete"  value=""/>
			</form>
		</div>
		<div class="edit">
			<form method="POST" action="/?cat=amrubro">
				<input type="hidden" name="id" value="<?php echo $r->id; ?>"/>
				<input class="edi" type="submit" name="edit" value=""/>
			</form>
		</div>
	</div>
<?php } ?>
	<div class="new">
			<form method="POST" action="/?cat=amrubro">
				<input type="hidden" name="id" value="0"/>
				<input class="new" type="submit" name="new"  value=""/>
			</form>
	</div>
</div>