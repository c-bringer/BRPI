import java.util.Scanner;

public class While
{
    private static Scanner scanner = new Scanner(System.in);
    private static String couleur = null;

    public static void main(String[] args) {
        do {
            System.out.println("Entrez une couleur");
            couleur = scanner.nextLine();

            if(!couleur.equals("rouge")) {
                System.out.println("Mauvaise couleur!");
            }
        }while(!couleur.equals("rouge"));

        System.out.println("Vous avez trouvé!");

        //Infini
        //5 fois
        //0 fois
        //0 fois
        //2 fois
        //Infini
        //1 fois
        //99 fois
        //Infini
    }
}
