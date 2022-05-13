public class Lattice_Paths {
    public static void main(String[] args){
        long c = 1L, n = 20;
        for (long i = 1L; i <= n; i++){
            c = c * (n + i) / i;
        }
        System.out.println(c);
    }
}
