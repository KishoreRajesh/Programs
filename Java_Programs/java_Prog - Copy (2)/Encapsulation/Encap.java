import java.io.*;
import java.util.*;

class Area{
	int len;
	int bred;
	
	Area(int len,int bred){
		this.len = len;
		this.bred = bred;
	}

	public void area(){
		int ar = len*bred;
		System.out.println("Area = "+ar);
	}
}

class Encap{
	public static void main(String[] args){
		Area r  = new Area(5,6);
		r.area();
	}
}