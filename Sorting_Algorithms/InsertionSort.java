 import java.util.*;
 public class InsertionSort{
	 static int[] sorting(int[] a){
		int lengthOfArray=a.length;
		for(int i=1;i<lengthOfArray;i++){
			int current=a[i];
			int j=0;
			for(j=i-1;j>=0;j--){
				if(current<=a[j]){
					break;
				}
				a[j+1]=a[j];
			}
			a[j+1]=current;
		}
		return a;
	}
	public static void main(String[] args){
		int[] unsortedArray=new int[]{12,3,15,22,89,32,45,16,8,90,55,14,78,63,23};
		int[] sortedArray=sorting(unsortedArray);
		System.out.print(Arrays.toString(sortedArray));
	}
}
/**
 * suppose the size of an array is n 
 * search a minimum element in range of [0,n-1] and swap it with index 0 element
 *  now search in range of [1,n-1] and swap it with index 1....
 */
