import java.util.*;
public  class GridTraveller{
    static HashMap<String, Long> map=new HashMap<>();
    static long Grids(int x, int y){
        String key=x+","+y;
        if(map.containsKey(key)){
            return map.get(key);
        }
        if(x==0 || y==0)
            return 0;
        if(x==1 && y==1){
            return 1;
        }
        map.put(key, Grids(x-1, y)+Grids(x, y-1));
        return map.get(key);
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        in.close();
        System.out.println(Grids(x,y));
    }
}