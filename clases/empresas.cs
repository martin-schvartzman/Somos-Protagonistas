<?php
class empresas{
	private $conexion;
	
	public function empresas(){
		$this->conexion=new bd("somosprotagonistas");
	}
	
	public function traer(){
		$sql="select * from empresa";
		$em=$this->conexion->query($sql);
		$i=0;$empresas=array();
		foreach($em as $e){
			$empresas[$i++]=new empresa($e["id"]);
		}
		return $empresas;
	}
	
	public function add($n,$d,$r){
		$sql="insert into empresa (nombre,descripcion,rubro) values ('".antinject($n)."','".antinject($d)."',".antinject($r).")";
		$this->conexion->insert($sql);
	}
	
}
?>