using System;

namespace Ex2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 31;

            if(Convert.ToBoolean(x))
            {
                Console.WriteLine("X is different from 0");
            } else
            {
                Console.WriteLine("X equals 0");
            }
        }
    }
}
