<?php
class empresa{
	private $conexion;
	public $id;
	public $nombre;
	public $descripcion;
	public $rubro;
	
	public function empresa($id){
		$sql="select * from empresa where id=".antinject($id);
		$this->conexion=new bd("somosprotagonistas");
		$r=$this->conexion->get($sql);
		$this->id=$r["id"];
		$this->nombre=$r["nombre"];
		$this->descripcion=$r["descripcion"];
		$this->rubro=new rubro($r["rubro"]);
	}
	
	public function edit($nombre,$d,$r){
		$sql="update empresa set nombre='".antinject($nombre)."',descripcion='".antinject($d)."',rubro=".antinject($r)." where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function delete(){
		$sql="delete from empresa where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function episodios(){
		$sql="select * from episodio where empresa=".$this->id;
		$ru=$this->conexion->query($sql);
		$rubros=array();
		$i=0;
		foreach($ru as $r){
			$rubros[$i++]=new episodio($r["id"]);
		}
		return $rubros;
	}
}
?>