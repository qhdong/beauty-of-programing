public class Chess {
    public static void main(String[] args) {
        byte i = 9 * 9;
        while (i-- != 0) {
            if (i / 9 % 3 != i % 9 %3) {
                System.out.printf("A = %d, B = %d%n", i / 9 + 1, i % 9 + 1);
            }
        }
    }
}
