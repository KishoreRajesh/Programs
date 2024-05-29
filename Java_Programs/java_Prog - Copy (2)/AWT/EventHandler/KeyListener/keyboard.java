import java.awt.*;
import java.applet.*;
import java.awt.event.*;
	
public class keyboard extends Applet implements KeyListener{
	String s1 = "You Pressed: ",s2 = "";
	public void init(){
		addKeyListener(this);
		requestFocus();
	}

	public void keyPressed(KeyEvent ke){
		showStatus("Key Pressed");
	}

	public void keyReleased(KeyEvent ke){
		showStatus("Key Released");	
	}

	public void keyTyped(KeyEvent ke){
		s2 = " "+ke.getKeyChar();
		repaint();
	}

	public void paint(Graphics g){
		g.drawString(s1, 90, 50);
		g.drawString(s2, 170, 50);
	}
}

/*<applet code = "keyboard.class" width=250 height=150>
</applet>*/