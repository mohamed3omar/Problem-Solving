import java.util.*;
 
public class Age_year_Day_month {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
 
        int n = input.nextInt();
 
        int year = n / 365;
 
        int days = n % 365;
 
        int month = (int) days / 30;
        
        int day = days%30;
        
        
        System.out.println(year + " years");
        System.out.println(month + " months");
        System.out.println(day + " days");
        
 
    }
 
}