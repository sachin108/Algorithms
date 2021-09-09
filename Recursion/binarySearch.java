class binarySearch{
	static int searching(int[] array,int target,int lower,int upper){
		if(lower>=upper){
			return 0;
		}
		int mid=lower+(upper-lower)/2;
		if(array[mid]==target)
			return mid;
		if(array[mid]>target)
			upper=mid;
		if(array[mid]<target)
			lower=mid+1;
		return searching(array,target,lower,upper);
	
	}
	public static void main(String[] args){
		int[] array={11,22,33,44,55,66,77,78,88,99};
		System.out.print(searching(array,04,0,array.length-1));
	}
}