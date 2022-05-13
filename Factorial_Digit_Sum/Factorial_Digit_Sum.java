import java.math.BigInteger;

public class Factorial_Digit_Sum {
    public BigInteger fakultaet(BigInteger zahl){
        BigInteger ergebnis, eins = BigInteger.valueOf(1);
        if (zahl.equals(0))
            return BigInteger.valueOf(1);
        else{
            return zahl.multiply(fakultaet(zahl.subtract(eins)));
        }
    }

    public static void main(String[] args){
        BigInteger start = BigInteger.valueOf(4);
        Factorial_Digit_Sum f1 = new Factorial_Digit_Sum();
        System.out.println(f1.fakultaet(start));
    }
}
