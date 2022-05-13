import java.lang.Math;
import java.math.BigInteger;

public class Power_Digit_Sum {
    public static void main(String[] args){
        String ergalsstring;
        int b = 2, exp = 1000, summe = 0, laenge;
        BigInteger basis = new BigInteger(String.valueOf(b));
        BigInteger ergebnis = basis.pow(exp);
        ergalsstring = ergebnis.toString();
        laenge = ergalsstring.length();
        for (int i = 0; i < laenge; i++){
            summe += Integer.parseInt(ergalsstring.substring(i, i + 1));
        }
        System.out.println(summe);
    }
}
