using System;
using System.Collections.Generic;

namespace Ex6
{
    class Program
    {
        static void Main(string[] args)
        {
            List<String> peches = new List<String>();

            peches.Add("Peche1");
            peches.Add("Peche2");
            peches.Add("Peche3");
            peches.Add("Peche4");
            peches.Add("Peche5");
            peches.Add("Peche6");
            peches.Add("Peche7");

            foreach(String peche in peches)
            {
                Console.WriteLine("{0}", peche);
            }

            Console.ReadKey();
        }
    }
}
