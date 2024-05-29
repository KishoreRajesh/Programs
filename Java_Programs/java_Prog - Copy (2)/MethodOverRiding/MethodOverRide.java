import java.io.*;
import java.util.*;

class Language{
	public void disp(){
		System.out.println("English");
	}
}

class JavaEx extends Language{
	public void disp(){
		System.out.println("Java");
	}
}

class MethodOverRide{
	public static void main(String[] args){
		JavaEx j = new JavaEx();
		j.disp();
		Language l = new Language();
		l.disp();
	}
}