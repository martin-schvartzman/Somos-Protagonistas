<div id="invitadosmain">
	<div id="col1">
		<div id="browser">
		Invitados<br/><br/>
		
		
		<?php foreach($rubros as $r){ ?>
			<div class="rubro">
				<a href="/?cat=invitados&rub=<?php echo $r->id; ?>">
					<?php echo $r->nombre; ?>
					<?php if($r->id == $rub){ ?>
						<br/>
						<?php foreach($empresas as $e){ ?>
							<div class="empresa">
								<a <?php if($e->id == $emp)echo 'id="selectedempresa"' ?> 
								href="/?cat=invitados&rub=<?php echo $r->id; ?>&emp=<?php echo $e->id; ?>">
									<?php echo $e->nombre; ?>
								</a>
							</div>
						<?php } ?>
					<?php } ?>
				</a>
			</div>
		<?php } ?>
		
		
		
		<div style="clear:both;"></div>
		
		</div>
		<div id="publicidad"></div>
	</div>
	<div id="col2">
		<div id="result">
		
		<?php if(isset($_GET["epi"])){ 
		$episodio=new episodio($_GET["epi"]);
		?>
		<div class="empresa"><?php echo $e->empresa->nombre; ?></div>
					<div class="emision"><?php echo $e->fecha; ?></div>
					<iframe id="ytvideo" width="354" height="270" src="http://www.youtube.com/embed/<?php echo $e->video; ?>?rel=0" frameborder="0" allowfullscreen></iframe>
		<?php }else{ ?>
		
		<?php if(isset($episodios)) {foreach($episodios as $e){ ?>
			<div class="videocontainer">
				<a href="/?cat=invitados&rub=<?php echo $rub; ?>&emp=<?php echo $emp; ?>&epi=<?php echo $e->id; ?>">
				<div class="video">
					<div class="empresa"><?php echo $e->empresa->nombre; ?></div>
					<div class="emision"><?php echo $e->fecha; ?></div>
					<div class="preview" style="background-image:url('http://img.youtube.com/vi/<?php echo $e->video; ?>/1.jpg');">
						<img style="height: 164px;width: 196px;" src="http://img.youtube.com/vi/<?php echo $e->video; ?>/1.jpg"/>
					</div>
					<div class="descripcion"><?php echo $e->descripcion; ?></div>
				</div>
				</a>
			</div>
		<?php } }?>
		
		<?php } ?>
		
		
		<div style="clear:both;"></div>
		
		</div>
	</div>
</div>
<div style="clear:both;padding-top:20px;"></div>