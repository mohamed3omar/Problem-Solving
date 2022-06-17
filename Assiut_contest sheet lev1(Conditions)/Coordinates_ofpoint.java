import java.util.*;
 
public class Coordinates_ofpoint {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        String p = input.nextLine();
        
        
 
        double a =  Double.parseDouble(p.substring(0, p.indexOf(" ")));
 
        double b =  Double.parseDouble(p.substring(p.indexOf(" ") + 1));
        
        
        
        if( a > 0  && b>0)
            System.out.println("Q1");
        else if( a > 0 && b < 0 )
            System.out.println("Q4");
        else if((a ==0 && b>0) ||( a==0 && b<0))
            System.out.println("Eixo Y");
        else if( (b== 0 && a<0) || (b==0 && a>0))
            System.out.println("Eixo X");
        else if ( a< 0 && b > 0 )
            System.out.println("Q2")    ;
        else if ( a < 0 && b<0)
            System.out.println("Q3");
        else 
            System.out.println("Origem");
 
    
 
}}