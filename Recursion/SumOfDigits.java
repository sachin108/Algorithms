import java.util.Scanner;

public class SumOfDigits{

	static int sod(int n,int nod){
 
 		//nod is number of digits
		nod--;
		if(nod==0){
			return n ;
		}

		else{
			int dig=(int)(n/Math.pow(10, nod));
			int rem=(int)(n%Math.pow(10, nod));

			return sod(rem,nod)+dig;
		}
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("enter a number");
		Integer n=input.nextInt();
		String x=n.toString();
		System.out.println("Sum Of Digits = "+sod(n,x.length()));
		input.close();
	}
}

/**
123=100+23
123=100+20+3
	
100/100
20/10 //public
3/1	
	
6874=6000+874  
6874=6000+800+74
6874=6000+800+70+4 

*/