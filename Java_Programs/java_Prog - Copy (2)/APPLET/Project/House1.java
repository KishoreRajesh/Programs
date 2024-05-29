import java.awt.*;
import java.applet.*;

public class House1 extends Applet{

	public void paint(Graphics g){
		int[] x = {100,50,150,100};
		int[] y = {100,150,150,100};
		
		
		g.drawLine(100,100,150,150);
		g.drawLine(100,100,50,150);
		g.drawRect(50,150,100,100);
		g.setColor(Color.ORANGE);
		g.fillRect(50,150,100,100);
		g.drawLine(100,100,200,100);
		g.drawLine(200,100,250,150);
		g.drawRect(150,150,100,100);
		g.setColor(Color.YELLOW);
		g.fillRect(150,150,100,100);
		g.drawLine(250,150,150,150);
		g.drawLine(170,115,195,115);
		g.drawLine(195,115,213,135);
		g.drawLine(213,135,188,135);
		g.drawLine(170,115,188,135);
		g.drawLine(185,115,203,135);
		g.drawLine(181,125,208,125);
		g.drawRect(75,175,50,75);
		g.setColor(Color.BLACK);
		g.fillRect(75,175,50,75);
		g.drawRect(75,100,10,50);
		g.setColor(Color.BLACK);
		g.fillRect(75,100,10,50);
		g.setColor(Color.RED);
		g.fillPolygon(x,y,4);
	}
}

/*<applet code = "House.class"width=500 height=500>
</applet>*/