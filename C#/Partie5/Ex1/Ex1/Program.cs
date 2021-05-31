using System;

namespace Ex1
{
    class Program
    {
        static void Main(string[] args)
        {
            int anneeNaissance;

            do
            {
                Console.WriteLine("Saisir annee de naissance");

                while (!int.TryParse(Console.ReadLine(), out anneeNaissance))
                {
                    Console.WriteLine("L'annee doit être un entier");
                }

                Console.WriteLine("Tu as {0} ans", ageCompute(anneeNaissance));
            } while (againCheck());
        }

        static int ageCompute(int year)
        {
            int annee = DateTime.Now.Year;
            return annee - year;
        }

        static bool againCheck()
        {
            bool result = false;
            char validation;

            Console.WriteLine("Refaire une saisie ?");
            validation = Console.ReadKey().KeyChar;

            if(validation.Equals('y') || validation.Equals('Y'))
            {
                result = true;
            }

            return result;
        }
    }
}
