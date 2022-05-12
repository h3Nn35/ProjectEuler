public class Sum_Square_Difference {
    public static void main(String[] args) {
        int sumofsquares = 0, squareofsums = 0;
        for (int i = 1; i < 101; i++){
            sumofsquares += i*i;
            squareofsums += i;
        }
        squareofsums = squareofsums * squareofsums;
        System.out.println(squareofsums - sumofsquares);
    }
}
