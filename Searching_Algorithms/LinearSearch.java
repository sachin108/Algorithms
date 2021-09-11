class LinearSearch{
	
	static void searching(int[] a, int key){
		int l=a.length-1;
		for(int i=0;	i<(l/2);  i++){
			if(a[i]==key){
				System.out.println("Found the key at index "+i);
				break;
			}
			else if(a[l-i]==key){
				System.out.println("Found the key at index "+(l-i));
				break;				
			}
		}
	}
	
	public static void main(String[] args){
		int[] array=new int[]{11,4,15,6,3,9,19,27,21,24,99,56,68,89};
		int target=21;
		searching(array,target);
		target=100;
		searching(array,target);
	}
}