import java.util.*;   
class WeirdAlgorithm{

    public static void Find(long arg){
        if(arg == 1){
            System.out.println("1");
            return;
        }
        System.out.print(arg + " ");
        if(arg % 2 == 1){
             Find(3 * arg + 1);
        }
        else{
            Find(arg / 2);
        }
      
    }
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        long arg = x.nextLong();
       Find(arg);
    }
}