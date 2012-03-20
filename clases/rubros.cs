<?php
class rubros{
	private $conexion;
	
	public function rubros(){
		$this->conexion=new bd("somosprotagonistas");
	}
	
	public function traer(){
		$sql="select * from rubro";
		$ru=$this->conexion->query($sql);
		$rubros=array();
		$i=0;
		foreach($ru as $r){
			$rubros[$i++]=new rubro($r["id"]);
		}
		return $rubros;
	}
	
	public function add($n){
		$sql="insert into rubro (nombre) values ('".antinject($n)."')";
		//echo $sql;
		return $this->conexion->delete($sql);
	}
}