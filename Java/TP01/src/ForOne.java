public class ForOne
{
    public static void main(String[] args) {
        int tab []= {1, 3, 5, 7, 9, 4, 8, 6, 2, 0};

        for (int i = 0; i < tab.length; i++) {
            System.out.println(tab[i]);
        }

        for(int i : tab) {
            System.out.println(i);
        }
    }
}
