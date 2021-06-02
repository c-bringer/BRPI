using System;
using System.Collections.Generic;

namespace Ex3
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Table> listTable = new List<Table>();

            for(int i = 0; i < 5; i++)
            {
                Random random = new Random();
                int width = random.Next(50, 200);
                int length = random.Next(50, 200);
                int height = random.Next(50, 200);

                listTable.Add(new Table(width, length, height));
            }

            for (int i = 0; i < 5; i++)
            {
                Random random = new Random();
                int width = random.Next(40, 120);
                int length = random.Next(40, 120);
                int height = random.Next(40, 120);

                listTable.Add(new Table(width, length, height));
            }

            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine();
                listTable[i].showData();
            }
        }
    }
}