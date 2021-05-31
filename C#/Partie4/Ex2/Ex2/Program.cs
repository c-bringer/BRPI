using System;

namespace Ex2
{
    class Program
    {
        static void Main(string[] args)
        {
            int nombre;
            bool stop = false;

            while (!stop)
            {
                Console.WriteLine("Saisir un nombre");

                while (!int.TryParse(Console.ReadLine(), out nombre))
                {
                    Console.WriteLine("Le nombre doit être un entier");
                }

                Console.WriteLine("La valeur absolue de {0} est {1}", nombre, Math.Abs(nombre));

                Console.WriteLine("Voulez-vous continuer ? oui ou non");
                if (Console.ReadLine() == "non")
                {
                    stop = true;
                }
            }
        }
    }
}
