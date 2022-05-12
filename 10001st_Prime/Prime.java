public class Prime {
    public long naechstePrimzahl(long alt) {
        long zahl = alt;
        do {
            zahl += 1;
        } while (!istPrimzahl(zahl));
        return zahl;
    }

    public Boolean istPrimzahl(long zahl) {
        for (long i = 2; i < zahl / 2; i++)
            if (zahl % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args){
        Prime p1 = new Prime();
        long primzahl = 2L;
        for (int i = 1; i < 10002; i++){
            primzahl = p1.naechstePrimzahl(primzahl);
        }
        System.out.println(primzahl);
    }
}
