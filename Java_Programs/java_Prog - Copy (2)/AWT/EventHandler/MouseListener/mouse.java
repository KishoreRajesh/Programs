import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class mouse extends Applet implements MouseListener , MouseMotionListener{
	String msg = "";
	String s = "";
	int y =0,x=0,r=0,g=0,b=0;
	public void init(){
		addMouseListener(this);
		addMouseMotionListener(this);
	}
	
	public void mouseClicked(MouseEvent me){
		x = me.getX();
		y = me.getY();
		msg = "Mouse Clicked";
		r = 0;
		g = 0;
		b = 255;
		repaint();
	}

	public void mouseEntered(MouseEvent me){
		x = me.getX();
		y = me.getY();
		msg = "Mouse Entered";
		r = 255;
		g = 0;
		b = 0;
		repaint();
	}

	public void mouseExited(MouseEvent me){

	}

	public void mousePressed(MouseEvent me){
		x = me.getX();
		y = me.getY();
		msg = "Down";
		r = 0;
		g = 255;
		b = 0;
		repaint();
	}

	public void mouseReleased(MouseEvent me){
		x = me.getX();
		y = me.getY();
		msg = "Up";
		r = 255;
		g = 0;
		b = 0;
		repaint();
	}

	public void mouseDragged(MouseEvent me){
		x = me.getX();
		y = me.getY();
		msg = "Mouse Dragged";
		r = 255;
		g = 0;
		b = 0;
		repaint();
	}

	public void mouseMoved(MouseEvent me){
		x = me.getX();
		y = me.getY();
		msg = "Mouse Moved";
		r = 255;
		g = 0;
		b = 0;
		repaint();
	}

	public void paint(Graphics g1){
		g1.drawString(msg,120,10);
		Color c = new Color(r,g,b);
		g1.setColor(c);
		g1.fillOval(x,y,20,20);
	}
}

/*<applet code = "mouse.class" width=250 height=150>
</applet>*/










