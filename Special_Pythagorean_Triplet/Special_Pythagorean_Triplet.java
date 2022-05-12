import java.lang.Math;

public class Special_Pythagorean_Triplet {
    public static void main(String[] args){
        int a = 1, b = 1;
        double c;
        for (int i = 0; i < 400; i++){
            for (int j = 0; j < 400; j++){
                c = Math.sqrt(a*a + b*b);
                if (a+b+c == 1000){
                    System.out.println(a * b * (int) c);
                    return;
                }
                b += 1;
            }
            b = 1;
            a += 1;
        }
    }
}
