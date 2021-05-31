public class Chien extends Animal
{
    public Chien(String name)
    {
        super(name);
    }

    public void move()
    {
        System.out.println("Je deplace " + this.getName());
    }
}
