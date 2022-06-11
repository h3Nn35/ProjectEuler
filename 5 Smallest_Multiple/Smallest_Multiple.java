public class Smallest_Multiple {
    public static void main(String[] args){
        Smallest_Multiple p1 = new Smallest_Multiple();
        int kandidat = 19;
        Boolean gefunden;
        do{
            kandidat += 1;
            gefunden = p1.isGueltig(kandidat);
        }while(!gefunden);
        System.out.println(kandidat);
    }

    public Boolean isGueltig(int zahl){
        for (int i = 20; i > 0; i--)
            if (zahl % i != 0)
                return false;
        return true;
    }
}
