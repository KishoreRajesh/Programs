import java.util.*;
import java.io.*;

class Callme{
	void call(String msg){
		System.out.print("[");
		try{
			Thread.sleep(1000);
		}
		catch(InterruptedException e){
			System.out.println("Interrupted");
		}
		System.out.print(msg);
		try{
			Thread.sleep(1000);
		}
		catch(InterruptedException e){
			System.out.println("Interrupted");
		}
		System.out.println("]");
		try{
			Thread.sleep(1000);
		}
		catch(InterruptedException e){
			System.out.println("Interrupted");
		}
	}
}

class Caller implements Runnable{
	String msg;
	Callme target;o
	Thread t;
		
	public Caller(Callme tar, String s){
		target = tar;
		msg = s;		
		t  = new Thread(this);
		t.start();
	}
	
	public void run(){
		synchronized(target){	
			target.call(msg);
		}
	}
}

class Synch1{
	public static void main(String[] args){
		Callme target = new Callme();
		Caller o1 = new Caller(target, "hello");
		Caller o2 = new Caller(target, "Sync");
		Caller o3 = new Caller(target, "World");
		try{
			o1.t.join();
			o2.t.join();
			o3.t.join();
		}
		catch(InterruptedException e){
			System.out.println("Interrupted");
		}
	}
}








