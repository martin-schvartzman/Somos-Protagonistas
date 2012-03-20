<div id="abmepisodios">
	<div id="rubros">
		<?php foreach($rub as $r){ ?>
			<div <?php if($_GET["rub"]==$r->id)echo 'id="actual"'; ?>>
				<a href='/?cat=abmepisodios&rub=<?php echo $r->id; ?>'>
					<?php echo $r->nombre; ?>
				</a>
			</div>
		<?php } ?>
	</div>
	<div></div>
	
	<div id="empresas">
		<?php foreach($emp as $r){ ?>
			<div <?php if($_GET["emp"]==$r->id)echo 'id="eactual"'; ?>>
				<a href='/?cat=abmepisodios&rub=<?php echo $_GET["rub"]."&emp=".$r->id; ?>'>
					<?php echo $r->nombre; ?>
				</a>
			</div>
		<?php } ?>
	</div>
	<div></div>
	
	<div id="episodios">
		<?php foreach($epi as $e){ ?>
		<div class="rubro">
			<div class="nombre"><?php echo $e->fecha; ?></div>
		<div class="delete">
			<form method="POST">
				<input type="hidden" name="id" value="<?php echo $e->id; ?>"/>
				<input class="del" type="submit" name="delete"  value=""/>
			</form>
		</div>
		<div class="edit">
			<form method="POST" action="/?cat=amepisodio">
				<input type="hidden" name="id" value="<?php echo $e->id; ?>"/>
				<input class="edi" type="submit" name="edit" value=""/>
			</form>
		</div>
		</div>
		<?php } ?>
	</div>
	<div class="new">
			<form method="POST" action="/?cat=amepisodio">
				<input type="hidden" name="id" value="0"/>
				<input class="new" type="submit" name="new"  value=""/>
			</form>
	</div>
</div>