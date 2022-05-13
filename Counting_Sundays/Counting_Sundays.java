import java.lang.reflect.Array;
import java.util.Arrays;

public class Counting_Sundays {
    public static void main(String[] args){
        Integer[] dreissig = {4, 6, 9, 11};
        Integer[] einunddreissig = {1, 3, 5, 7, 8, 10, 12};
        Boolean schaltjahr = false;
        int aktuellerMonat = 1, aktuellesjahr = 1901, aktuellerTag = 6, anzahl = 0, februar = 28;
        do{
            if (aktuellerTag == 1)
                anzahl += 1;
            if (Arrays.asList(dreissig).contains(aktuellerMonat)){
                if (aktuellerTag + 7 <= 30){
                    aktuellerTag += 7;
                }
                else{
                    aktuellerTag = 7 - (30 - aktuellerTag);
                    aktuellerMonat += 1;
                }
            } else if (Arrays.asList(einunddreissig).contains(aktuellerMonat)) {
                if (aktuellerTag + 7 <= 31){
                    aktuellerTag += 7;
                }
                else{
                    aktuellerTag = 7 - (31 - aktuellerTag);
                    if (aktuellerMonat == 12) {
                        aktuellerMonat = 1;
                        aktuellesjahr += 1;
                        if (aktuellesjahr % 4 == 0)
                            februar = 29;
                        else
                            februar = 28;
                    }
                    else
                        aktuellerMonat += 1;
                }
            } else if (aktuellerMonat == 2) {
                if (aktuellerTag + 7 <= februar){
                    aktuellerTag += 7;
                }
                else{
                    aktuellerTag = 7 - (februar - aktuellerTag);
                    aktuellerMonat += 1;
                }
            }
        }while(aktuellesjahr<2001);
        System.out.println(anzahl);
    }
}
