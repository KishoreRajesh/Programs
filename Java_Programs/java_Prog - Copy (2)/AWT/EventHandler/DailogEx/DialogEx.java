import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class DialogEx{
	public static void main(String[] args){
		CloseAdapter ca = new CloseAdapter();
		Frame f = new Frame();
		f.setTitle("Simple Frame");
		f.setSize(300,300);
		f.addWindowListener(ca);
		f.show();
	}
}

class CloseAdapter extends WindowAdapter{
	Dialog d;
	public void windowClosing(WindowEvent event){
		d= new Dialog (new Frame(),"Alert",true);
		d.setLayout(new FlowLayout());
		Button ok = new Button("OK");
		ok.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
				{ d.setVisible(false);
			}
		});
		d.add(new Label("click ok to exit"));
		d.add(ok);
		d.pack();
		d.setVisible(true);
		System.exit(0);
	}
}		





