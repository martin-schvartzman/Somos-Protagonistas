<div id="homemain">
	<div id="col1">
		<div id="video">
			<div style="text-align:left;color:white;padding:15px;font-family:arial;">Lo Ultimo</div>
			<div style="padding-left:15px;">
				<div style="float:left">
				<iframe id="ytvideo" width="354" height="270" src="http://www.youtube.com/embed/<?php echo $vids[0]->video; ?>?rel=0" frameborder="0" allowfullscreen></iframe>
				</div>
				<div style="float:left;width:100px;padding:10px;text-align:left;color:white;font-family:arial;"></div>
			</div>
		</div>
		<div id="galeria">
			<div style="float:left;width:11px;height:24px;padding-top:28px;padding-bottom:30px;">
				<!--<div id="flechal"></div>-->
			</div>
			<div class="ytthumb" content="<?php echo $vids[0]->video; ?>" style="background-image:url('http://img.youtube.com/vi/<?php echo $vids[0]->video; ?>/1.jpg');"></div>
			<div class="ytthumb" content="<?php echo $vids[1]->video; ?>" style="background-image:url('http://img.youtube.com/vi/<?php echo $vids[1]->video; ?>/1.jpg');"></div>
			<div class="ytthumb" content="<?php echo $vids[2]->video; ?>" style="background-image:url('http://img.youtube.com/vi/<?php echo $vids[2]->video; ?>/1.jpg');"></div>
			<div class="ytthumb" content="<?php echo $vids[3]->video; ?>" style="margin-right:14px;background-image:url('http://img.youtube.com/vi/<?php echo $vids[3]->video; ?>/1.jpg');"></div>
			<div style="float:left;width:11px;height:24px;padding-top:28px;padding-bottom:30px;">
				<!--<div id="flechar"></div>-->
			</div>
		</div>
		<div id="publicidad1"></div>
	</div>
	<div id="col2">
		<div style="height:176px;width:248px;margin-bottom:23px;background-color:#2b2b2b;padding:14px;">
			<img src="/views/images/ester.jpg" style="height:172px;width:252px"/>
		</div>
		<div style="height:117px;width:276px;margin-bottom:25px;background-color:#2b2b2b;"></div>
		<div style="height:100px;width:276px;margin-bottom:23px;background-color:#2b2b2b;"></div>
		<div style="height:108px;width:276px;background-color:#2b2b2b;"></div>
	</div>
</div>