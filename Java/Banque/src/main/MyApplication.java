import java.io.IOException;
import java.text.ParseException;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

public class MyApplication {

    public MyApplication() {}

    public void start() throws ParseException, IOException, ClassNotFoundException {
        Scanner sc = new Scanner(System.in);
        User user = FileSerialization.userInputSerialization();

        if(user == null) {
            String clientName = ScannerWrapper.clientNameValidation();
            user = new User(clientName);
        }

        int choice;

        do {
            System.out.println("1. \t Créer un compte");
            System.out.println("2. \t Afficher un compte");
            System.out.println("3. \t Créer une ligne comptable");
            System.out.println("4. \t Sortir");
            System.out.println("5. \t De l'aide \n");

            System.out.print("Votre choix : ");

            while(!sc.hasNextInt()) {
                System.out.println("Veuillez faire un choix entre 1 et 5.");
                sc.next();
            }

            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    createAccount(user);
                    break;
                case 2:
                    displayAccounts(user);
                    break;
                case 3:
                    createAccountingLine(user);
                    break;
                case 4:
                    exit();
                    break;
                case 5:
                    displayHelp();
                    break;
                default:
                    System.out.println("Veuillez faire un choix entre 1 et 5.");
            }
        } while (choice >= 1 || choice <= 5);
    }

    private void createAccount(User user) {
        String type;
        int numberAccount;
        int firstValCredit;
        int placementRate;

        type = ScannerWrapper.typeAccountValidation();
        numberAccount = ScannerWrapper.numberAccountValidation();
        firstValCredit = ScannerWrapper.firstValCreditValidation();
        placementRate = ScannerWrapper.placementRateValidation();

        Account account = new Account(type, numberAccount, firstValCredit, placementRate);
        user.addAccount(account);
    }

    private void displayAccounts(User user) {
        System.out.println("Choisir un compte :");

        if(user.getAccountList().size() == 0) {
            System.out.println("Aucun compte de disponible.");
        } else {
            for (Account account : user.getAccountList()) {
                System.out.println("Numéro de compte : " + account.getNumberAccount());
            }

            int numberAccount = ScannerWrapper.numberAccountValidation();

            displayAccountDetails(numberAccount, user);
        }
    }

    private void displayAccountDetails(int numberAccount, User user) {
        System.out.println("Numéro de compte : " + numberAccount);

        for (Account account : user.getAccountList()) {
            if (numberAccount == account.getNumberAccount()) {
                System.out.println("Type : " + account.getType());
                System.out.println("Valeur courante : " + account.getValue());
                System.out.println("Taux : " + account.getPlacementRate() + "\n");
                System.out.println("Voici les dix dernières opérations : ");

                if(account.getAccountingLineList().size() < 10) {
                    displayAccountDetailsOperations(account.getAccountingLineList());
                } else {
                    List<AccountingLine> tenLastAccountingLine = account.getAccountingLineList()
                            .subList(account.getAccountingLineList().size() - 11, account.getAccountingLineList().size() - 1);

                    displayAccountDetailsOperations(tenLastAccountingLine);
                }
            } else {
                System.out.println("Ce compte n'existe pas, veuillez réessayer\n");
                displayAccounts(user);
            }
        }
    }

    private void displayAccountDetailsOperations(List<AccountingLine> accountingLineList) {
        for(AccountingLine accountingLine : accountingLineList) {
            System.out.println("Numéro de compte : " + accountingLine.getNumberAccount());
            System.out.println("Valeur : " + accountingLine.getValue());
            System.out.println("Date de l'opération : " + accountingLine.getDateOperation());
            System.out.println("Raison d'achat : " + accountingLine.getReasonPurchase());
            System.out.println("Mode de paiement ou numéro de chèque : " + accountingLine.getPaiementMode());
        }
    }

    private void createAccountingLine(User user) throws ParseException {
        int numberAccount;
        int value;
        String reasonPurchase;
        String paiementMode;

        numberAccount = ScannerWrapper.numberAccountValidation();

        for(Account account : user.getAccountList()) {
            if(numberAccount == account.getNumberAccount()) {
                value = ScannerWrapper.valueValidation();
                Date dateOperationParse = ScannerWrapper.dateValidation();
                reasonPurchase = ScannerWrapper.reasonPurchaseValidation();
                paiementMode = ScannerWrapper.paiementModeValidation();

                AccountingLine accountingLine = new AccountingLine(numberAccount, value, dateOperationParse,
                        reasonPurchase, paiementMode);
                account.addAccountingLine(accountingLine);

            } else {
                System.out.println("Ce compte n'existe pas, veuillez réessayer\n");
                this.createAccountingLine(user);
            }
        }
    }

    private void exit() {
        System.exit(-1);
    }

    private void displayHelp() {
        System.out.println("1. \t Vous permez de créer un compte bancaire avec les informations suivantes :" +
                "type de compte, numéro de compte, valeur créditée et taux de placement");
        System.out.println("2. \t Affiche les informations d'un compte, type, valeur courante et taux ainsi que" +
                " les dix dernières opérations");
        System.out.println("3. \t Permet de créer une ligne comptable avec numéro de compte, somme à créditer " +
                "date de l'opération, motif d'achat et le mode de paiement");
        System.out.println("4. \t Permet de quitter le programme");
        System.out.println("5. \t Permet d'avoir une aide sur le menu du programme \n");
    }
}
