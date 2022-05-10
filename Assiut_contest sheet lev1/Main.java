import java.util.*;
public class Main
{
	public static void main(String[] args) {
		    Scanner input = new Scanner(System.in);
        
        long N = input.nextLong();
        long M = input.nextLong();
        
        long sum= (N%10)+ (M%10);
        System.out.println(sum);
      }
}