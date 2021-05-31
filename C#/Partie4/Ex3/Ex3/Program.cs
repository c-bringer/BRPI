using System;

namespace Ex3
{
    class Program
    {
        static void Main(string[] args)
        {
            for(int i = 100; i <= 500; i++)
            {
                int nombre, reste, somme = 0, temp;
                nombre = i;
                temp = nombre;
                while (nombre > 0)
                {
                    reste = nombre % 10;
                    somme = somme + (reste * reste * reste);
                    nombre = nombre / 10;
                }
                if (temp == somme)
                {
                    Console.WriteLine("{0} est un nombre Armstrong", i);
                }
            }
        }
    }
}
