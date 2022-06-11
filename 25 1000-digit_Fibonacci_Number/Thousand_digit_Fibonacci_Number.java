import java.math.BigInteger;

public class Thousand_digit_Fibonacci_Number {
    public static void main(String[] args){
        int anzahl = 1;
        BigInteger links = BigInteger.valueOf(0), alt = BigInteger.valueOf(0), fibo = BigInteger.valueOf(1);
        String fibonacci;
        do{
            anzahl += 1;
            alt = fibo;
            fibo = links.add(alt);
            links = alt;
            fibonacci = fibo.toString();
        }while(fibonacci.length() < 1000);
        System.out.println(fibonacci);
        System.out.println(anzahl);
    }
}