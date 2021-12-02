import java.util.Scanner;

public class StrReverse{

	static String reverse(String s,int index){

		if(s.length()==0){

			return "";
		}
		else{
			String sub=s.substring(0,index);// because exclusive range
			return s.charAt(index)+reverse(sub,sub.length()-1);
		}

	}

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		String s=input.nextLine();
		System.out.println(reverse(s,s.length()-1));
		input.close();
	}
}

/**
reverse 

*/