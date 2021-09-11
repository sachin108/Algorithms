import java.util.*;
class ExponentialSearch{
	
	static int searching(int[] ar,int key){
		int lengthOfArray=ar.length;
		if(ar[0]==key){
			return 0;
		}
		int i=1;
		while(i<lengthOfArray	&&	ar[i]<=key){
			i*=2;
		}
		return Arrays.binarySearch(ar,i/2,Math.min(i,lengthOfArray-1),key);
	}
	
	public static void main(String[] args){
		int[] array=new int[]{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};	
		int index=searching(array,233);
		System.out.println(index);
	}
}
