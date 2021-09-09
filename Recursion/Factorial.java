import java.util.Scanner;

public class Factorial{

	int fact(int n){

		if(n==1 || n==0){
			return 1;
		}

		else{
			return n*fact(n-1);
		}
	}

	public static void main(String[] args) {
		
		Factorial obj=new Factorial();
		System.out.println("enter a number");
		Scanner in = new Scanner(System.in);
		int n=in.nextInt();
		System.out.println(obj.fact(n));
	}
}