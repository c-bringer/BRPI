using System;

namespace Ex4
{
    class Program
    {
        static void Main(string[] args)
        {
            double a1 = 459.9;
            double a2 = 1000.5;
            decimal b1 = 1999.99m;
            decimal b2 = 3959;
            int c1 = 2000;

            Console.WriteLine(a1 + a2);
            Console.WriteLine(b1 + b2);
            Console.WriteLine(Convert.ToInt32(b1) + c1);
            Console.WriteLine(Decimal.ToDouble(b2) + a1);
        }
    }
}
