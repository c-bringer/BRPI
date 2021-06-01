using System;

namespace Ex5
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] tab1 = new int[18];
            int[,] tab2 = new int[1, 18];
            int[,,] tab3 = new int[1, 1, 18];

            Console.Write("Tab1=");
            for(int i = 0; i < tab1.Length; i++)
            {
                tab1[i] = i;
                Console.Write(" {0} ", tab1[i]);
            }
            Console.WriteLine();

            Console.Write("Tab2=");
            for(int i = 0; i < tab1.Length; i++)
            {
                tab2[0, i] = tab1[i];
                Console.Write(" {0} ", tab2[0, i]);
            }
            Console.WriteLine();

            Console.Write("Tab3=");
            for(int i = 0; i < tab1.Length; i++)
            {
                tab3[0, 0, i] = tab1[i];
                Console.Write(" {0} ", tab3[0, 0, i]);
            }
            Console.WriteLine();

            Console.ReadKey();
        }
    }
}
