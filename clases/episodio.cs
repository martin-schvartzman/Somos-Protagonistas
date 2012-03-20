<?php
class episodio{
	private $conexion;
	public $id;
	public $descripcion;
	public $empresa;
	public $video;
	public $fecha;
	
	public function episodio($id){
		$this->conexion=new bd("somosprotagonistas");
		$sql="select * from episodio where id=".antinject($id);
		$ep=$this->conexion->get($sql);
		$this->id=$ep["id"];
		$this->descripcion=$ep["descripcion"];
		$this->video=$ep["video"];
		$this->fecha=$ep["fecha"];
		$this->empresa=new empresa($ep["empresa"]);
	}
	
	public function edit($d,$e,$v){
		$sql="update episodio set empresa=".antinject($e).",descripcion='".antinject($d)."',video='".antinject($v)."' where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function delete(){
		$sql="delete from episodio where id=".$this->id;
		$this->conexion->delete($sql);
	}
}
?>