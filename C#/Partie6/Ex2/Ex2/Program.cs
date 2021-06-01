using System;

namespace Ex2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] tab1 = new int[10];
            int saisie;

            Console.Write("Tab1 =");
            for (int i = 0; i < tab1.Length; i++)
            {
                tab1[i] = i;
                Console.Write(" {0} ", tab1[i]);
            }
            Console.WriteLine();

            do
            {
                Console.WriteLine("Saisir une valeur entre 0 et 9");

                while (!int.TryParse(Console.ReadLine(), out saisie))
                {
                    Console.WriteLine("La valeur doit être un entier");
                }
            } while (saisie < 0 && saisie > 9);

            Console.Write("Tab2 =");
            tab1 = rotLeft(tab1, saisie);

            for (int i = 0; i < tab1.Length; i++)
            {
                Console.Write(" {0} ", tab1[i]);
            }
            Console.ReadKey();
        }

        static int[] rotLeft(int[] a, int d)
        {
            int[] temp = new int[d];

            for (int i = 0; i < d; i++)
            {
                temp[i] = a[i];
            }

            for (int i = d; i < a.Length; i++)
            {
                a[i - d] = a[i];
            }

            for (int i = 0; i < d; i++)
            {
                a[a.Length - d + i] = temp[i];
            }

            return a;
        }
    }
}
