using System;

namespace Ex4
{
    class Program
    {
        static void Main(string[] args)
        {
            String str;
            String strCompress;
            String strReverse;

            Console.WriteLine("Saisir une phrase");
            str = Console.ReadLine();

            Palindrome palindrome = new Palindrome();
            strCompress = palindrome.compress(str);
            strReverse = palindrome.reverse(strCompress);

            if(strCompress == strReverse)
            {
                Console.WriteLine("C'est un palimdrome");
            }
            else
            {
                Console.WriteLine("Ce n'est pas un palimdrome");
            }

            Console.ReadKey();
        }
    }
}
