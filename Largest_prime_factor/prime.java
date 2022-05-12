public class prime {
    public long naechstePrimzahl(long alt){
        long zahl = alt;
        do{
            zahl += 1;
        }while(!istPrimzahl(zahl));
        return zahl;
    }

    public Boolean istPrimzahl(long zahl){
        for (long i = 2; i < zahl / 2; i++)
            if (zahl % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args){
        long zahl = 600851475143L, prime = 2;
        prime p1 = new prime();
        do{
            if (zahl % prime == 0)
                zahl = zahl / prime;
            else{
                prime = p1.naechstePrimzahl(prime);
            }
        }while(prime <= zahl);
        System.out.println(prime);
    }
}
