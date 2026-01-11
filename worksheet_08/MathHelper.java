public class MathHelper {
    public static int calculateCube(int n){
        return n * n * n ;
    }
    public static boolean isEven(int n){
      return n % 2 == 0;
    }

    public static void main(String[] args) {
        int number = 4;

        System.out.println("Number: " + number);
        System.out.println("Cube of " + number + " is: " + MathHelper.calculateCube(number));
        System.out.println("Is " + number + " even? " + MathHelper.isEven(number));

    }
}
