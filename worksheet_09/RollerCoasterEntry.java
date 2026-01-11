import java.util.InputMismatchException;
import java.util.Scanner;

public class RollerCoasterEntry {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter height (cm): ");

        try {
            int height = scanner.nextInt();
            if (height < 120 || height > 250) {
                throw new IllegalArgumentException("Height requirement not met. Safety lock engaged");
            }

            System.out.println("Entry allowed. Enjoy the ride!");

        } catch (InputMismatchException e) {
            System.out.println("Error: Invalid input. Please enter a number.");
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
