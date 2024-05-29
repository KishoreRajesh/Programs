import java.util.*;
import java.io.*;
	
class Students{
	int rollno;
	void getnum(int n){
		rollno = n;
	}

	void putnum(){
		System.out.println("Rollno = "+rollno);
	}
}

class Test extends Students{
	float mark1, mark2;
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

interface Sports{
	float sport = 8.0F;
	
	void put();
}

class Results extends Test implements Sports{
	float total;
	public void put(){
		System.out.println("Sports = "+sport);
	}
	
	void display(){
		total = mark1+ mark2+ sport;
		putnum();
		putmarks();
		put();
		System.out.println("Total marks: "+total);
	}
}

class Hybrid {
	public static void main(String[] args){
		Results st = new Results();
		st.getnum(3452);
		st.getmarks(36.0F,32.5F);
		st.display();
	}
}
	






