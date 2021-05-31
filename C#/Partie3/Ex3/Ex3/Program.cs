using System;

namespace Ex3
{
    class Program
    {
        static void Main(string[] args)
        {
            char lettre = 'Z';
            char lettreInt = (char)90;
            char lettreUni = '\u005A';
            char lettreDec = '\x005A';
            Console.WriteLine("{0} {1} {2} {3}", lettre, lettreInt, lettreUni, lettreDec);
        }
    }
}
