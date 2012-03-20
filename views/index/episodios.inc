<div id="episodiosmain">
	<div id="col1">
		<div id="browser">
		Episodios<br/><br/>
			
			<?php foreach( $years as $y ) {?>
			<div class="year">
				<a href="/?cat=episodios&y=<?php echo $y["y"]; ?>" ><?php echo $y["y"]; ?></a>
				<?php if($ye==$y["y"]){ ?>
					<br/>
					<?php foreach( $months as $m ) {?>
						<div class="month">
							<a href="/?cat=episodios&y=<?php echo $y["y"]; ?>&m=<?php echo $m["m"]; ?>" >
							<?php echo mes($m["m"]); ?></a>
							<?php if($mo==$m["m"]){ ?>
							<br/>
								<?php foreach( $weeks as $w ) {?>
									<div class="week">
										<a <?php if($we==$w["w"])echo 'id="selectedepisode"'; ?>  
										href="/?cat=episodios&y=<?php echo $y["y"]; ?>&m=<?php echo $m["m"]; ?>&w=<?php echo $w["w"]; ?>" >
										semana del <?php echo $w["w"]; ?>
										</a>
									</div>
								<?php } ?>
							<?php } ?>
						</div>
					<?php } ?>
				<?php } ?>
			</div>
			<?php } ?>
			
			
			<div style="clear:both;padding-top:20px;"></div>
			
		</div>
		<div id="publicidad"></div>
	</div>
	<div id="col2">
		<div id="result">
		
		<?php if(isset($_GET["e"])){ 
		$e=new episodio($_GET["e"]);
		?>		<div class="empresa"><?php echo $e->empresa->nombre; ?></div>
					<div class="emision"><?php echo $e->fecha; ?></div>
					<iframe id="ytvideo" width="354" height="270" src="http://www.youtube.com/embed/<?php echo $e->video; ?>?rel=0" frameborder="0" allowfullscreen></iframe>
		<?php }else{ ?>
		<?php foreach($epis as $e){ ?>
			<div class="videocontainer">
				<a href="/?cat=episodios&y=<?php echo $ye; ?>&m=<?php echo $mo; ?>&w=<?php echo $we; ?>&e=<?php echo $e->id; ?>">
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
		<?php } ?>
		<div style="clear:both;"></div>
		<?php } ?>
		
		</div>
	</div>
</div>
<div style="clear:both;padding-top:20px;"></div>