import java.awt.*;
	
public class FlowEx{
	public static void main(String[] args){
	
		Frame f = new Frame();
		Label l1 = new Label( "Name" );
		Label l2 = new Label( "Age" );
		TextField t1 = new TextField(20);
		TextField t2 = new TextField(20);
		Button b1 = new Button("Add");
		Button b2 = new Button("Cancel");
		f.setLayout(new FlowLayout(FlowLayout . LEFT));
		f.setTitle("flow Layout Frame");
		f.setLayout(new FlowLayout());
		f.setSize(250,150);
		f.add(l1);
		f.add(t1);
		f.add(l2);
		f.add(t2);
		f.add(b1);
		f.add(b2);
		f.show();
	}

}
	