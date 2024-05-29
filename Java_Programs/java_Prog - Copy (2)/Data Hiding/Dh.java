import java.io.*;
import java.util.*;

class Person{
	private int age;

	public void setAge(int age){
		this.age = age;
	}

	public int getAge(){
		return age;
	}

}

class Dh{
	public static void main(String[] args){
		Person p = new Person();
		p.setAge(24);
		System.out.println("Age: "+p.getAge());
	}
}