import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MenuEx extends JFrame{
	public MenuEx(){
		super ("Menu_Example");
		setSize(200,200);
		setLocation(400,300);
		JMenu utensils = new JMenu("Utensils");
		utensils.setMnemonic(KeyEvent.VK_U);
		utensils.add(new JMenuItem("Fork");
		utensils.add(new JMenuItem("Knife");
		utensils.add(new JMenuItem("Spoon");






