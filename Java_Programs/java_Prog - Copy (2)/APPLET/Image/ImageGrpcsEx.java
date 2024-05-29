import java.applet.*;
import java.awt.*;

/*<applet code = "ImageGrpcsEx" width="500" height="500">
</applet>*/

public class ImageGrpcsEx extends Applet{
	Image pic;
	public void init(){
		pic = getImage(getDocumentBase(),"image.jpeg");
	}

	public void paint(Graphics g){
		g.drawImage(pic,100,30,this);
	}
}