import java.util.Scanner;

public class Palindrome{

	static String reverse(String s,int index){

		if(s.length()==0){

			return "";
		}
		else{
			String sub=s.substring(0,index);
			return s.charAt(index)+reverse(sub,sub.length()-1);
		}

	}

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		String s=input.nextLine();
		
		String rev=reverse(s,s.length()-1);
		
		if(rev.equals(s)){

			System.out.println("yes");
		}
		else{

			System.out.println("no");
		}
		input.close();
	}
}

/**
reverse 

*/
