import java.awt.*;

public class GridEx{
	public static void main(String[] args){
		Frame f = new Frame();
		f.setLayout(new GridLayout(4,3));
		for(int i =0;i<10;i++){
			f.add(new Button(""+i));
		}
		f.setSize(2000,2000);
		f.show();
	}
}