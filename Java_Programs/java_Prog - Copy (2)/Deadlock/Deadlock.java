import java.util.*;
import java.io.*;

class A{
	synchronized void foo(B b){
		String name = Thread.currentThread().getName();
		System.out.println(name +" entered A foo");
		try{
			Thread.sleep(1000);
		}
		catch(InterruptedException e){
			System.out.println("A Interrupted");
		}
		System.out.println(name + " trying to call b last()");
		b.last();
	}
	
	synchronized void last(){
		System.out.println("Inside A Last");
	}
}

class B{
	synchronized void bar(A a){
		String name = Thread.currentThread().getName();
		System.out.println(name+" Entered B bar");
		try{
			Thread.sleep(1000);
		}
		catch(InterruptedException e){	
			System.out.println("B Interrupted");
		}
		System.out.println(name + " trying to enter A.last()");
		a.last();
	}

	synchronized void last(){
		System.out.println("Inside B last()");
	}
}

class Deadlock implements Runnable{
	A a = new A();
	B b = new B();
	Deadlock(){
		Thread.currentThread().setName("Main Thread");
		Thread T = new Thread(this,"RacingThread");
		T.start();
		a.foo(b);
		System.out.println("Back in main Thread");
	}
	
	public void run(){	
		b.bar(a);
		System.out.println("Back in other Thread");
	}

		
	public static void main(String[] args){
		new Deadlock();
	}
}
















