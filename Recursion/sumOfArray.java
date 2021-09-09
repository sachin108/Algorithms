class sumOfArray{
	static int sum(int[] array,int i){
		if(i==array.length)
			return 0;
		return array[i]+sum(array,++i);
	}
	public static void main(String[] args){
		int[] array={1,2,3,4,5,6,7,8,9,10};
		System.out.print(sum(array,0));
	}
}