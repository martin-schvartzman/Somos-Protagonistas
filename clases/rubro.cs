<?php
class rubro{
	private $conexion;
	public $id;
	public $nombre;
	
	public function rubro($id){
		$sql="select * from rubro where id=".antinject($id);
		$this->conexion=new bd("somosprotagonistas");
		$r=$this->conexion->get($sql);
		$this->id=$r["id"];
		$this->nombre=$r["nombre"];
	}
	
	public function edit($nombre){
		$sql="update rubro set nombre='".antinject($nombre)."' where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function delete(){
		$sql="delete from rubro where id=".$this->id;
		$this->conexion->delete($sql);
	}
	
	public function empresas(){
		$sql="select * from empresa where rubro=".$this->id;
		$ru=$this->conexion->query($sql);
		$rubros=array();
		$i=0;
		foreach($ru as $r){
			$rubros[$i++]=new empresa($r["id"]);
		}
		return $rubros;
	}
}

?>