public class palindrome {
    public static void main(String[] args){
        int zahl1 = 999, zahl2 = 999, produkt;
        palindrome p1 = new palindrome();
        for (int j = 0; j < 100; j++) {
            for (int i = 0; i < 100; i++) {
                produkt = zahl1 * zahl2;
                if (p1.istPalindrome(produkt)){
                        System.out.println(produkt);
                        return;
                }
                zahl1 = zahl1 - 1;
            }
            zahl1 = 999;
            zahl2 -= 1;
        }
    }

    public Boolean istPalindrome(int zahl){
        String kandidat = zahl + " ";
        if (kandidat.length() == 7)
            return kandidat.substring(0, 1).equals(kandidat.substring(5, 6)) && kandidat.substring(1, 2).equals(kandidat.substring(4, 5)) && kandidat.substring(2, 3).equals(kandidat.substring(3, 4));
        return false;
    }
}
