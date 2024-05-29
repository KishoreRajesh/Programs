import java.io.*;
import java.util.*;

class Triangle{
	double l,b;
	public Triangle(){
	}
	
	public Triangle(double x, double y){
		l = x;
		b = y;
	}
	void area(){
		double a = 0.5*l*b;
		System.out.println("Length: "+l+" Breadth: "+b);
		System.out.println("Area: "+a);
	}
}

class Cons{
	public static void main(String[] args){
		Triangle t1 = new Triangle();
		Triangle t2 = new Triangle(5.0,5.0);
		t1.area();
		t2.area();
	}
}