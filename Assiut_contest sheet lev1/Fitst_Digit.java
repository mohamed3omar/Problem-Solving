import java.util.*;
public class Fitst_Digit {
 
  
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        String n = input.nextLine();
        
        String b = n.substring( 0 , 1 );
        
        
        int s = Integer.parseInt(b);
        
        if(s %2 == 0 )
            System.out.println("EVEN");
        else if( s %2  != 0 )
            System.out.println("ODD");
        
    }
    
}