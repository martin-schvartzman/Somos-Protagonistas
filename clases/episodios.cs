<?php
class episodios{
	private $conexion;
	
	public function episodios(){
		$this->conexion=new bd("somosprotagonistas");
	}
	
	public function traer(){
		$sql="select * from episodio order by fecha desc";
		$em=$this->conexion->query($sql);
		$i=0;$empresas=array();
		foreach($em as $e){
			$empresas[$i++]=new episodio($e["id"]);
		}
		return $empresas;
	}
	
	public function home(){
		$sql="select * from episodio order by fecha desc limit 0,4";
		$em=$this->conexion->query($sql);
		$i=0;$empresas=array();
		foreach($em as $e){
			$empresas[$i++]=new episodio($e["id"]);
		}
		return $empresas;
	}
	
	public function add($d,$e,$v,$f){
		$sql="insert into episodio (descripcion,empresa,video,fecha) values ('".antinject($d)."',".antinject($e).",'".antinject($v)."','".antinject($f)."')";
		echo $sql;
		$this->conexion->insert($sql);
	}
	
	public function years(){
		$sql="select distinct year(fecha) as y from episodio order by fecha desc";
		$em=$this->conexion->query($sql);
		return $em;
	}
	
	public function months($y){
		$sql="select distinct month(fecha) as m from episodio where year(fecha) = '".$y."' order by fecha desc";
		$em=$this->conexion->query($sql);
		return $em;
	}
	
	public function weeks($y,$m){
		$sql="select distinct day(fecha) as w from episodio where year(fecha) = '".$y."' and month(fecha) = '".$m."' order by fecha asc";
		$em=$this->conexion->query($sql);
		return $em;
	}
	
	public function weekepisodes($y,$m,$w){
		$sql="select id from episodio where
		year(fecha) = '".$y."' and 
		month(fecha) = '".$m."' and
		day(fecha) = '".$w."' order by fecha asc";
		$em=$this->conexion->query($sql);
		$i=0;$empresas=array();
		foreach($em as $e){
			$empresas[$i++]=new episodio($e["id"]);
		}
		return $empresas;
	}
	
	
}
?>