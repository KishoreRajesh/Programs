import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class SimpleFrame extends Frame{
	SimpleFrame(){
		CloseAdapter ca = new CloseAdapter();
		setTitle("Simple Frame");
		setSize(300,300);
		addWindowListener(ca);
		show();
	}

	public static void main(String[] arg){
		new SimpleFrame();
	}

}

class CloseAdapter extends WindowAdapter{
	public void windowClosing(WindowEvent event){
		System.exit(0);
	}

}