using System;

namespace Ex2
{
    class Program
    {
        static void Main(string[] args)
        {
            int anneeNaissance;
            AgeTest ageTest = new AgeTest();

            do
            {
                Console.WriteLine("Saisir annee de naissance");

                while (!int.TryParse(Console.ReadLine(), out anneeNaissance))
                {
                    Console.WriteLine("L'annee doit être un entier");
                }

                Console.WriteLine("Tu as {0} ans", ageTest.ageCompute(anneeNaissance));
            } while (ageTest.againCheck());
        }
    }
}
