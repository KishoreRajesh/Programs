import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class ItemEx extends Applet implements ItemListener{
	String s = "";
	Checkbox c1,c2,c3;
	CheckboxGroup cbg;
	
	public void init(){
		cbg = new CheckboxGroup();
		c1 = new Checkbox("Apple",cbg,true);
		c2 = new Checkbox("Orange",cbg,false);
		c3 = new Checkbox("PineApple",cbg,false);
		add(c1);
		add(c2);
		add(c3);
		c1.addItemListener(this);
		c2.addItemListener(this);
		c3.addItemListener(this);
	}

	public void itemStateChanged(ItemEvent ie){
		repaint();
	}

	public void paint(Graphics g){
		s = "Selected: ";
		s+= cbg.getSelectedCheckbox().getLabel();
		g.drawString(s,70,100);
	}
}

/*<applet code = "ItemEx.class" width=200 height = 150>
</applet>*/