import java.util.ArrayList;
import java.util.List;

public class Account {
    private String type;
    private int numberAccount;
    private double value;
    private int placementRate;
    private List<AccountingLine> accountingLineList;

    public Account(String type, int numberAccount, int firstValCredit, int placementRate) {
        this.type = type;
        this.numberAccount = numberAccount;
        this.value = firstValCredit;
        this.placementRate = placementRate;
        this.accountingLineList = new ArrayList<>();
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public int getNumberAccount() {
        return numberAccount;
    }

    public void setNumberAccount(int numberAccount) {
        this.numberAccount = numberAccount;
    }

    public double getValue() {
        return value;
    }

    public void setValue(double value) {
        this.value = value;
    }

    public int getPlacementRate() {
        return placementRate;
    }

    public void setPlacementRate(int placementRate) {
        this.placementRate = placementRate;
    }

    public List<AccountingLine> getAccountingLineList() {
        return accountingLineList;
    }

    public void setAccountingLineList(List<AccountingLine> accountingLineList) {
        this.accountingLineList = accountingLineList;
    }

    public void addAccountingLine(AccountingLine accountingLine) {
        this.accountingLineList.add(accountingLine);
        this.value += accountingLine.getValue();
    }
}
