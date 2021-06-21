import java.util.ArrayList;
import java.util.List;

public class TesteCompte
{
    public static void main(String[] args) {
        Compte compte1 = new Compte("Corentin");
        Compte compte2 = new Compte("Julien");

        compte1.deposer(500);
        compte2.deposer(1000);

        compte2.retirer(10);

        compte1.virerVers(75, compte2);

        compte1.toString();
        compte2.toString();


        /*List<Compte> comptes = new ArrayList<>();

        for(int i = 0; i < 10; i++) {
            comptes.add(new Compte());
        }

        for(int i = 0; i < comptes.size(); i++) {
            comptes.get(i).deposer(200 + (100 * i));
        }

        for(int i = 0; i < comptes.size(); i++) {
            if(i <= 8) {
                comptes.get(i).virerVers(20, comptes.get(i + 1));
            }
        }

        for(int i = 0; i < comptes.size(); i++) {
            comptes.get(i).afficher();
        }
         */
    }
}
