import java.util.*;
 
public class DIgit_captal_small {
 
    public static void main(String[] args) {
 
        Scanner n = new Scanner(System.in);
 
        
 
        char x = n.next().charAt(0);
 
        if (x >= 65 && x <= 90) {
            System.out.println("ALPHA" + "\n" + "IS CAPITAL");
        } else if (x >= 48 && x <= 57) {
            System.out.println("IS DIGIT");
        } else if (x >= 97 && x <= 122) {
            System.out.println("ALPHA" + "\n" + "IS SMALL");
        
    }
    }}