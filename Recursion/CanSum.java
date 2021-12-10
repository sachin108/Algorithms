import java.util.*;
public class CanSum{
  public static boolean canSum(int target, int[] array){
    if(target==0)
      return true;
    if(target<0)
      return false;
    for (int i: array ) {
      target=target-i;
      if(canSum(target, array)==true)
        return true;
    }
    return false;
  }
  public static void main(String[] args) {
    Scanner in=new Scanner(System.in);
    int target=in.nextInt();
    int[] array=new int[]{4,7};
    System.out.print(canSum(target,array));
  }
}

//not efficient
