import java.awt.*;

public class BorderEx{
	public static void main(String[] args){
		Frame F = new Frame();
		F.setLayout(new BorderLayout());
		F.add(new Label("NORTH",Label.CENTER),BorderLayout.NORTH);
		F.add(new Label("SOUTH",Label.CENTER),BorderLayout.SOUTH);
		F.add(new Button("RIGHT"),BorderLayout.EAST);
		F.add(new Button("LEFT"),BorderLayout.WEST);
		F.setSize(300,500);
		F.show();
	}
}