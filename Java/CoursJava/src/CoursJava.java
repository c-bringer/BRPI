import java.util.*;

public class CoursJava {

    /*private static final String kCorentin = "Corentin";
    private static final String kPauline = "Pauline";
    private static final String kJulien = "Julien";

    public interface Etudiant {
        void donnerNom();
    }*/

    public static void main(String[] args) {
        /*List<String> myList = new ArrayList<>();
        Set<String> mySet = new HashSet<>();
        Map<String, Integer> myMap = new HashMap<>();

        myMap.put(kCorentin, 20);
        myMap.put(kPauline, 22);
        myMap.put(kJulien, 20);

        for(Map.Entry<String, Integer> entry: myMap.entrySet()) {
            System.out.println(entry.getValue());
        }*/

        /*Chien chien = new Chien("Igor") {
            @Override
            public void move() {
                System.out.println("Je deplace " + this.getName());
            }
        };

        chien.move();

        Etudiant etud = () -> {
            System.out.println("Corentin");
        };

        etud.donnerNom();*/


        Scanner sc = new Scanner(System.in);

        int rayon = sc.nextInt();
        double nb = 2 * Math.PI * rayon;

        System.out.println(nb);
    }
}
