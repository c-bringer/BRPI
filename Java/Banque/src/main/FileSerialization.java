import java.io.*;

public class FileSerialization {
    public static void main(String[] args) {
        userSerialization();
    }

    public static void userSerialization() {
        try {
            User user = new User("Corentin Bringer");

            userOutputSerialization(user);
            User userDeserialization = userInputSerialization();

            System.out.println(userDeserialization.getName());

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }

    public static User userInputSerialization() throws IOException, ClassNotFoundException {
        FileInputStream fis = new FileInputStream("user.ser");
        ObjectInputStream ois = new ObjectInputStream(fis);
        User result = (User) ois.readObject();
        ois.close();

        return result;
    }

    public static void userOutputSerialization(User user) throws IOException {
        FileOutputStream fos = new FileOutputStream("user.ser");
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        oos.writeObject(user);
        oos.close();
    }
}
