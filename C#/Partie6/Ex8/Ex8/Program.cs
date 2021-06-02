using System;

namespace Ex8
{
    class Program
    {
        static void Main(string[] args)
        {
            String date = String.Empty;
            int day, dayVal, month;
            Date dateObj = new Date();

            Console.WriteLine("Saisir une date");
            date = Console.ReadLine();
            dateObj.scanDate(date, out day, out dayVal, out month);

            Console.WriteLine();
            Console.Write(date);
            Console.Write(" est converti en ");
            Console.Write(dateObj.convertDate(date, ref day, ref dayVal, ref month));
        }
    }
}
