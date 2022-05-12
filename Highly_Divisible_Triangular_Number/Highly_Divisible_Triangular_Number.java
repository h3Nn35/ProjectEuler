public class Highly_Divisible_Triangular_Number {
    public static void main(String[] args){
        int kandidat = 0, anzahl, zaehler = 1;
        do{
            anzahl = 0;
            kandidat += zaehler;
            zaehler += 1;
            for (int i = 1; i < kandidat / 2 + 1; i++){
                if (kandidat % i == 0)
                    anzahl += 1;
            }
        }while (anzahl < 500);
        System.out.println(kandidat);
    }

}
