public class Compte
{
    private int solde = 0;

    private String name = null;

    public Compte(String name)
    {
        this.name = name;
    }

    void deposer(int montant)
    {
        solde = solde + montant;
    }

    void retirer(int montant)
    {
        solde = solde - montant;
    }

    void virerVers(int montant, Compte destination)
    {
        this.retirer(montant);
        destination.deposer(montant);
    }

    String afficher()
    {
        System.out.printf("titulaire du compte : %s solde : %s%n", name, solde);
        return null;
    }

    public int getSolde() {
        return solde;
    }

    public void setSolde(int solde) {
        this.solde = solde;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        //return super.toString();
        return this.afficher();
    }
}
