using System;

namespace Ex6
{
    class Program
    {
        static void Main(string[] args)
        {
            ConsoleKeyInfo info;

            do
            {
                Console.WriteLine("Veuillez taper une lettre, svp");
                info = Console.ReadKey(true);
            } while (info.Key != ConsoleKey.X);
        }
    }
}
