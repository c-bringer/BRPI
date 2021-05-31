import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class ScannerWrapper {
    private static final Scanner sc = new Scanner(System.in);

    private ScannerWrapper() {}

    public static String nextLine() { return sc.nextLine(); }

    public static String clientNameValidation() {
        while(true) {
            System.out.println("Veuillez saisir votre nom et prénom : ");
            String clientName = nextLine().trim();
            if(!clientName.isEmpty() && clientName.matches("[A-Z][a-z]*[ '-][A-Z]+[a-zA-Z]+")) {
                return clientName;
            }
            System.out.println("Erreur: format de nom prénom invalide.");
        }
    }

    public static String typeAccountValidation() {
        while(true) {
            System.out.println("Le type du compte [Types possibles : Compte courant, joint, épargne] : ");
            String type = nextLine().trim();
            if(type.equals("Compte courant") || type.equals("joint") || type.equals("épargne")) {
                return type;
            }
            System.out.println("Erreur: format de compte invalide.");
        }
    }

    public static int numberAccountValidation() {
        while(true) {
            try {
                System.out.println("Le numéro du compte : ");
                return Integer.parseInt(nextLine().trim());
            } catch(java.lang.NumberFormatException p) {
                System.out.println("Erreur: format de numéro de compte invalide.");
            }
        }
    }

    public static int firstValCreditValidation() {
        while(true) {
            try {
                System.out.println("La première valeur créditée : ");
                int i = Integer.parseInt(nextLine().trim());
                if(i > 0) {
                    return i;
                }
                System.out.println("Erreur: la somme doit être supérieur à 0.");
            } catch(java.lang.NumberFormatException p) {
                System.out.println("Erreur: format de la somme à crédité invalide.");
            }
        }
    }

    public static int placementRateValidation() {
        while(true) {
            try {
                System.out.println("Le taux de placement dans le cas d'un compte épargne : ");
                int i = Integer.parseInt(nextLine().trim());
                if(i > 0) {
                    return i;
                }
                System.out.println("Erreur: le placement doit être supérieur à 0.");
            } catch(java.lang.NumberFormatException p) {
                System.out.println("Erreur: format du placement invalide.");
            }
        }
    }

    public static int valueValidation() {
        while(true) {
            try {
                System.out.print("Somme à créditer ou à débiter : ");
                return Integer.parseInt(nextLine().trim());
            } catch(java.lang.NumberFormatException p) {
                System.out.println("Erreur: format invalide.");
            }
        }
    }

    public static Date dateValidation() throws ParseException {
        while(true) {
            System.out.println("Date de l'opération (jj/mm/yyy) : ");
            String dateOperation = nextLine().trim();
            SimpleDateFormat simpleDate = new SimpleDateFormat("dd/MM/yyy");
            Date dateOperationParse = simpleDate.parse(dateOperation);
            Date currentDate = new Date();
            if(!dateOperation.isEmpty() && dateOperation.matches("[0-9]{2}/[0-9]{2}/[0-9]{4}")
                && dateOperationParse.before(currentDate)) {
                return dateOperationParse;
            }
            if(dateOperationParse.after(currentDate)) {
                System.out.println("Erreur: la date doit être inférieur à aujourd'hui.");
            } else {
                System.out.println("Erreur: format de date invalide.");
            }
        }
    }

    public static String reasonPurchaseValidation() {
        while(true) {
            System.out.print("Motif de l'achat ou de la vente [thèmes possibles : Salaire, Loyer, Alimentation, Divers] : ");
            String reasonPurchase = nextLine().trim();
            if(reasonPurchase.equals("Salaire") || reasonPurchase.equals("Loyer") ||
                    reasonPurchase.equals("Alimentation") || reasonPurchase.equals("Divers")) {
                return reasonPurchase;
            }
            System.out.println("Erreur: format de motifs d'achat invalide.");
        }
    }

    public static String paiementModeValidation() {
        while(true) {
            System.out.println("Mode de paiement [Types possibles : CB, numéro chèque, Virement] : ");
            String paiementMode = nextLine().trim();

            try {
                if(paiementMode.equals("CB") || paiementMode.equals("Virement")) {
                    return paiementMode;
                } else {
                    int value = Integer.parseInt(paiementMode);
                    if(value > 0) {
                        return paiementMode;
                    }
                }
                System.out.println("Erreur: format de type de paiement invalide.");
            } catch (NumberFormatException e) {
                System.out.println("Erreur: format de type de paiement invalide.");
            }
        }
    }
}
