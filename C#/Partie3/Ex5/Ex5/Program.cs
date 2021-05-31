using System;

namespace Ex5
{
    class Program
    {
        static void Main(string[] args)
        {
            String name;
            int age;

            Console.WriteLine("Bonjour, comment vous appelez-vous ?");
            name = Console.ReadLine();
            Console.WriteLine("Quel age avez-vous ?");

            while(!int.TryParse(Console.ReadLine(), out age))
            {
                Console.WriteLine("Votre age doit être un entier.");
            }

            Console.WriteLine("Vous vous appelez {0} et vous avez {1} ans.", name, age);
            Console.WriteLine("Vous vous appelez {0}, et, l'année prochaine, vous aurez {1} ans.", name, ++age);
        }
    }
}
