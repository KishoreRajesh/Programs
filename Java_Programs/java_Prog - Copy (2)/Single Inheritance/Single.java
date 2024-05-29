import java.io.*;
import java.util.*;

class Student{
	int rollno;
	void getnum(int n){
		rollno = n;
	}
}

class Test extends Student{
	float mark1,mark2;
	void getmarks(float m1,float m2){
		mark1 = m1;
		mark2 = m2;
	}

	void putmarks(){
		System.out.println("Marks Obtained");
		System.out.println("Subject1 : "+mark1);
		System.out.println("Subject2 : "+mark2);
	}
}

class Single{
	public static void main(String[] args){
		Test t = new Test();
		t.getnum(3452);
		t.getmarks(36.0F,32.5F);
		t.putmarks();
	}
}