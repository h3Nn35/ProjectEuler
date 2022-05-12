public class even {
    public static void main(String[] args){
        int summe = 0, links = 0, alt = 0, fibo = 1;
        do{
            if (fibo % 2 == 0) {
                summe += fibo;
            }
            alt = fibo;
            fibo = links + alt;
            links = alt;
        }while(fibo < 4000000);
        System.out.println(Integer.toString(summe));
    }
}
