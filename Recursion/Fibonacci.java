import java.util.*;
public class Fibonacci{
	static ArrayList<Double> list=new ArrayList<>();
	static double fibonacci(int m,int n){
		if(m==n){
			return list.get(m-1)+list.get(m-2);
		}
		else{
			list.add(list.get(m-1)+list.get(m-2));
			return fibonacci(++m,n);
		}
	}
	public static void main(String[] args){
		list.add(0.0);
		list.add(1.0);
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		System.out.print(fibonacci(2,n));
		in.close();
	}
}