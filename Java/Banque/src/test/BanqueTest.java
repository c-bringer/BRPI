import java.text.MessageFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.Duration;
import java.time.Instant;
import java.util.Date;

import org.junit.jupiter.api.*;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

public class BanqueTest {
    private static Instant startedAt;
    private MyApplication banqueUnderTest;

    @BeforeEach
    public void initApplication() {
        banqueUnderTest = new MyApplication();
    }

    @AfterEach
    public void undefApplication() {
        banqueUnderTest = null;
    }

    @BeforeAll
    public static void initStartedTime() {
        startedAt = Instant.now();
    }

    @AfterAll
    public static void showTestDuration() {
        Instant endedAt = Instant.now();
        long duration = Duration.between(startedAt, endedAt).toMillis();
        System.out.println(MessageFormat.format("Durée des tests : {0} ms", duration));
    }

    @ParameterizedTest(name = "{0} doit être égal à Corentin Bringer")
    @ValueSource(strings = {
            "corentin",
            "bringer",
            "corentin bringer",
            "Corentin",
            "Bringer",
            "Corentin Bringer"})
    public void testSetNameUser(String arg) {
        String actualResult = arg;
        assertEquals(true, actualResult.matches("[A-Z][a-z]*[ '-][A-Z]+[a-zA-Z]+"));
    }

    @ParameterizedTest(name = "{0} doit être égal à Compte courant, joint ou épargne")
    @ValueSource(strings = {
            "compte",
            "compte courant",
            "courant",
            "Compte Courant",
            "Compte courant",
            "joint",
            "Joint",
            "epargne",
            "Epargne",
            "épargne" })
    public void testSetTypeAccount(String arg) {
        String actualResult = arg;
        assertEquals(true, actualResult.equals("Compte courant") ||
                actualResult.equals("joint") || actualResult.equals("épargne"));
    }

    /*
    Concerne le numéro de compte et la valeur à ajouter aux comptes
     */
    @ParameterizedTest(name = "{0} doit être un entier")
    @ValueSource(strings = { "rfz", "34" })
    public void testSetNumberAccountAndValue(String arg) {
        String actualResult = arg;
        int value = Integer.parseInt(actualResult.replaceAll("[^0-9]", ""));
        assertEquals(34, value);
    }

    /*
    Concerne la première valeur à créditer sur le compte et le taux de placement du compte
     */
    @ParameterizedTest(name = "{0} doit être un entier supérieur à 0")
    @ValueSource(strings = { "rrg", "0", "-5", "12" })
    public void testFirstValueCreditAndPlacementRate(String arg) {
        String actualResult = arg;
        int value = Integer.parseInt(actualResult.replaceAll("-[0-9]", ""));
        assertEquals(12, value);
    }

    @ParameterizedTest(name = "{0} doit être égal à Salaire, Loyer, Alimentation ou Divers")
    @ValueSource(strings = {
            "bouffe",
            "sal",
            "salaire",
            "Salaire",
            "maison",
            "loYer",
            "Loyer",
            "alim",
            "alimentation",
            "Alimentation",
            "divers",
            "div",
            "Divers",
            "534"})
    public void testSetReasonPurchase(String arg) {
        String actualResult = arg;
        assertEquals(true, actualResult.equals("Salaire") || actualResult.equals("Divers") ||
                actualResult.equals("Loyer") || actualResult.equals("Alimentation"));
    }

    @ParameterizedTest(name = "{0} doit être égal à CB ou Virement")
    @ValueSource(strings = {"carte",
            "cb",
            "Cb",
            "CB",
            "virement",
            "sepa",
            "Virement"})
    public void testSetPaiementMode(String arg) {
        String actualResult = arg;
        assertEquals(true, actualResult.equals("CB") || actualResult.equals("Virement"));
    }

    @ParameterizedTest(name = "{0} doit être égal à dd/MM/yyyy et inférieur à celle du jour")
    @ValueSource(strings = {
            "8 octobre 2000",
            "02122023",
            "01/12/2018",
            "01/01/2021",
            "01/01/2022"})
    public void testDateOperation(String arg) throws ParseException {
            String actualResult = arg;
            SimpleDateFormat simpleDate = new SimpleDateFormat("dd/MM/yyy");
            Date dateOperationParse = simpleDate.parse(actualResult);
            Date currentDate = new Date();

            assertEquals(true, actualResult.matches("[0-9]{2}/[0-9]{2}/[0-9]{4}")
                    && dateOperationParse.before(currentDate));
    }
}
