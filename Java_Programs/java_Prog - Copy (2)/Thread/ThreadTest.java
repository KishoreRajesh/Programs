class A extends Thread
{
    public void run()
    {
        for(int i=1;i<=5;i++){
            System.out.println("From thread A: "+i);
        }
        System.out.println("Exit from Thread A");
    }
}
class B extends Thread
{
    public void run()
    {
        for(int i=1;i<=5;i++){
            System.out.println("From thread B: "+i);
        }
        System.out.println("Exit from Thread B");
    }
}
class C extends Thread
{
    public void run()
    {
        for(int i=1;i<=5;i++){
            System.out.println("From thread C: "+i);
        }
        System.out.println("Exit from Thread C");
    }
}
public class ThreadTest {
    public static void main(String[] args){
        System.out.println("Main thread starts");
        A a = new A();
        a.start();
	System.out.println("Priority A = "+a.getPriority());
        B b = new B();
        b.start();
	System.out.println("Priority B = "+b.getPriority());
        C c = new C();
        c.start();
	System.out.println("Priority C = "+c.getPriority());
        System.out.println("Main thread ended");
    }
}
