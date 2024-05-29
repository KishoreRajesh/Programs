import java.io.*;
import java.util.*;

class Pattern {
	public void disp(){
		for(int i = 0;i<10;i++){
			System.out.print("*");
		}
	}
	
	public void disp(char p){
		for(int j = 0; j<10;j++){
			System.out.print(p);
		}
	}
}

class MethodLoad{
	public static void main(String[] args){
		Pattern a = new Pattern();
		a.disp();
		System.out.println();
		a.disp('A');
	}
}