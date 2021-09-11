public  class JumpSearch{
	
	static void jumping(int[] a,int size,int key){
		int jumpBy=(int)Math.sqrt(size);
		int i=0;
		for( i=jumpBy;i<size;){
			if(a[i-jumpBy]<=key && a[i]>=key){
				for(int j=i-jumpBy;j<i;j++){
					if(a[j]==key){
						System.out.print("element found at index "+j);
						return;
					}
				}
			}
			i=i+jumpBy;
		}
		for(int j=i-jumpBy;j<i;i++){
			if(a[j]==key){
				System.out.print("element found at index "+j);
				return;
			}
		}
		System.out.print("element not found ");
	}
	public static void main(String[] args){
		int[] array=new int[]{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
		jumping(array,array.length,144);
	}
}
/*
Like Binary Search, Jump Search is a searching algorithm for sorted arrays. 
The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.
For example, suppose we have an array arr[] of size n and block (to be jumped) size m. 
	Then we search at the indexes arr[0], arr[m], arr[2m]…..arr[km] and so on. 
	Once we find the interval (arr[km] < x < arr[(k+1)m]), we perform a linear search operation from the index km to find the element x.
	
		m=SQRT(n)
*/

/*
What is the optimal block size to be skipped? 	
		In the worst case, we have to do n/m jumps and if the last checked value is greater than the element to be searched for,
		 we perform m-1 comparisons more for linear search. Therefore the total number of comparisons in the worst case will be ((n/m) + m-1). 
		 The value of the function ((n/m) + m-1) will be minimum when m = √n. Therefore, the best step size is m = √n.
**/
/*
    Works only sorted arrays.
    The optimal size of a block to be jumped is (√ n). This makes the time complexity of Jump Search O(√ n).
    The time complexity of Jump Search is between Linear Search ( ( O(n) ) and Binary Search ( O (Log n) ).
    Binary Search is better than Jump Search, but Jump search has an advantage that we traverse back only once (Binary Search may require up to O(Log n) jumps, 
	consider a situation where the element to be searched is the smallest element or smaller than the smallest). So in a system where binary search is costly, we use Jump Search.*/