using System;

namespace Ex6
{
    class Program
    {
        static void Main(string[] args)
        {
            House house1 = new House(222);
            Door door1 = new Door();
            Person person1 = new Person("Paul Cezanne", house1, door1);
            person1.showData();

            House house2 = new House(92);
            Door door2 = new Door("rouge");
            Person person2 = new Person("Auguste Renoir", house2, door2);
            person2.showData();

            SmallAppart house3 = new SmallAppart(50, "bleue");
            Door door3 = new Door("rouge");
            Person person3 = new Person("Auguste Renoir", house3, door3);
            person3.showData();
        }
    }
}
