import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


/*<applet code ="JButtonDemo.class" width=350 height=500>
</applet>*/

public class JButtonDemo extends JApplet implements ActionListener{
	JTextField jtf;
	public void init(){
		Container ContentPane = getContentPane();
		ContentPane.setLayout(new FlowLayout());
		ImageIcon Hulk = new ImageIcon("image.jpeg");
		JButton jb = new JButton(Hulk);
		jb.setActionCommand("Hulk");
		jb.addActionListener(this); 
		ContentPane.add(jb);
		ImageIcon Certificate = new ImageIcon("udemy.jpeg");
		JButton Jb = new JButton(Certificate);
		jb.setActionCommand("Certificate");
		jb.addActionListener(this); 
		ContentPane.add(Jb);
		jtf = new JTextField(15);
		ContentPane.add(jtf);
	}

	public void actionPerformed(ActionEvent e){
		jtf.setText(e.getActionCommand());
	}
}		







