import java.io.*;
import java.util.*;

class Student{
	int rollno;
	
	void getnum(int n){
		rollno = n;
	}

	void putnum(){
		System.out.println("Rollno : "+rollno);
	}
}

class Test extends Student{
	float mark1,mark2;
	
	void getmarks(float m1, float m2){
		mark1 = m1;
		mark2 = m2;
	}
	
	void putmarks(){
		System.out.println("Marks Obtained");
		System.out.println("Subject1 : "+mark1);
		System.out.println("Subject2 : "+mark2);
	}
}

class Results extends Test{
	float total;
	
	void display(){
		total = mark1+mark2;
		putnum();
		putmarks();
		System.out.println("Total Marks: "+total);
	}
}


class Multilevel{
	public static void main(String[] args){
		Results r = new Results();
		r.getnum(3452);
		r.getmarks(36.0F,32.5F);
		r.display();
	}
}
	

