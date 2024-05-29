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

interface Sports{
	float sport = 8.0F;
	void put();
}

class Results extends Student implements Sports{
	public void put(){
		System.out.println("Sports = "+sport);
	}

	void display(){
		putnum();
		put();
	}
}

class Multiple{
	public static void main(String[] args){
		Results st = new Results();
		st.getnum(3452);
		st.display();
	}
}