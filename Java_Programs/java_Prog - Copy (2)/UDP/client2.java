import java.io.*;
import java.net.*;
		
class client2{
	public static void main(String[] args)throws IOException{
		Socket s = new Socket("LocalHost",888);
		DataOutputStream dos = new DataOutputStream(s.getOutputStream());
		BufferedReader kb = new BufferedReader(new InputStreamReader(System.in));
		BufferedReader br  = new BufferedReader(new InputStreamReader(s.getInputStream()));	
		String str, str1;
		while(!(str = kb.readLine()).equals("exit")){
			dos.writeBytes(str+" \n");
			str1 =  br.readLine();
			System.out.println(str1);
		}
		dos.close();
		br.close();
		kb.close();
		s.close();
		System.exit(0);
	}

}