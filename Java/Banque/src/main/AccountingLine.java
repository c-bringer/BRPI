import java.util.Date;

public class AccountingLine {
    private int numberAccount;
    private int value;
    private Date dateOperation;
    private String reasonPurchase;
    private String paiementMode;

    public AccountingLine(int numberAccount, int value, Date dateOperation, String reasonPurchase, String paiementMode) {
        this.numberAccount = numberAccount;
        this.value = value;
        this.dateOperation = dateOperation;
        this.reasonPurchase = reasonPurchase;
        this.paiementMode = paiementMode;
    }

    public int getNumberAccount() {
        return numberAccount;
    }

    public void setNumberAccount(int numberAccount) {
        this.numberAccount = numberAccount;
    }

    public int getValue() {
        return value;
    }

    public void setValue(int value) {
        this.value = value;
    }

    public Date getDateOperation() {
        return dateOperation;
    }

    public void setDateOperation(Date dateOperation) {
        this.dateOperation = dateOperation;
    }

    public String getReasonPurchase() {
        return reasonPurchase;
    }

    public void setReasonPurchase(String reasonPurchase) {
        this.reasonPurchase = reasonPurchase;
    }

    public String getPaiementMode() {
        return paiementMode;
    }

    public void setPaiementMode(String paiementMode) {
        this.paiementMode = paiementMode;
    }
}
