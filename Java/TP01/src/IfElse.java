import java.util.Scanner;

public class IfElse
{
    private static Scanner scanner = new Scanner(System.in);
    private static String message;

    public static void main(String[] args) {
        System.out.print("Entrez un nombre entier:");
        int number = scanner.nextInt();

        if(number > 0) {
            message = "Le nombre est positif ";
        } else if(number < 0) {
            message = "Le nombre est negatif ";
        } else {
            message = "Le nombre zéro ";
        }

        if(number % 2 == 0) {
            message = message + "est pair";
        } else {
            message = message + "est impair";
        }

        System.out.println(message);
    }
}
