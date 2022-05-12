public class Summation_Of_Primes {
    public static void main(String[] args){
        Summation_Of_Primes p1 = new Summation_Of_Primes();
        long primzahl = 2L, summe = 0;
        do{
            summe += primzahl;
            primzahl = p1.naechstePrimzahl(primzahl);
        }while (primzahl < 2000000);
        System.out.println(summe);
    }

    public long naechstePrimzahl(long alt) {
        long zahl = alt;
        do {
            zahl += 1;
        } while (!istPrimzahl(zahl));
        return zahl;
    }

    public Boolean istPrimzahl(long zahl) {
        if (zahl == 4)
            return false;
        for (long i = 2; i < zahl / 2; i++) {
            if (zahl % i == 0)
                return false;
        }
        return true;
    }
}
