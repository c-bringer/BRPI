import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class SearchNumber {
    public static void main(String[] args) throws IOException {
        List<Integer> listInteger = getIntListDataFromFile();

        sommeMachin(listInteger, 2);

        for(int i = 0; i < listInteger.size(); i++) {
            int num1 = listInteger.get(i);
            for(int j = i + 1; j < listInteger.size(); j++) {
               int num2 = listInteger.get(j);
               for(int k = j + 1; k < listInteger.size(); k++) {
                   int num3 = listInteger.get(k);
                   int somme = num1 + num2 + num3;
                   if(somme == 2020) {
                       System.out.println(num1 + " " + num2 + " " + num3);
                   }
               }
            }
        }
    }

    public static int sommeMachin(List<Integer> integerList, int depth) {

    }

    public static List<Integer> getIntListDataFromFile() throws IOException {
        String path = "src/input.txt";
        FileReader test = new FileReader(path);
        BufferedReader buffer = new BufferedReader(test);
        List<Integer> result = getListInteger(buffer);
        buffer.close();

        return result;
    }

    private static List<Integer> getListInteger(BufferedReader buffer) throws IOException {
        List<Integer> result = new ArrayList<>();
        String line;

        while((line = buffer.readLine()) != null) {
            result.add(Integer.parseInt(line));
        }

        return result;
    }
}
