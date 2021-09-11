import java.util.*;
class BinarySearch{
	
	static int searching(int a[],int lowerbound,int upperbound,int key){
		if(upperbound>=lowerbound){
			int mid=lowerbound+(upperbound-lowerbound)/2;
			if(a[mid]==key){
				return mid;
			}			
			if(a[mid]>key){
				return searching(a,lowerbound,mid-1,key);
			}
			if(a[mid]<key){
				return searching(a,mid+1,upperbound,key);
			}
		}
		return -1;
	}
	
	public static void main(String[] args){
		int[] array=new int[]{11,4,15,6,3,9,19,27,21,24,99,56,68,89};
		Arrays.sort(array);
		System.out.println(Arrays.toString(array));
		System.out.println("element found at index "+searching(array,0,array.length-1,99));
		System.out.println("element found at index "+searching(array,0,array.length-1,100));		
		System.out.print("element found at index "+searching(array,0,array.length-1,19));
	}
}
/**
		if(upperbound>=lowerbound){
			int mid=lowerbound+(upperbound-lowerbound)/2;
*/