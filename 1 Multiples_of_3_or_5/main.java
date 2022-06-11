public class main {
    public static void main(String[] args){
        int ende = 1000, summe = 0;
        for (int i = 3; i < ende; i++){
            if (i % 3 == 0 || i % 5 == 0)
                summe += i;
        }
        System.out.println(Integer.toString(summe));
    }
}
