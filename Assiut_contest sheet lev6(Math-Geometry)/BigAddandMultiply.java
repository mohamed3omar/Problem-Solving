import java.math.BigInteger;
import java.util.Scanner;

public class BigAddandMultiply{

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        String num = scanner.next();

        BigInteger bigInteger1 = new BigInteger(num);
        BigInteger bigInteger2 = new BigInteger("9999");

        System.out.println(bigInteger1.add(bigInteger2));
        System.out.println(bigInteger1.multiply(bigInteger2));
    }
}