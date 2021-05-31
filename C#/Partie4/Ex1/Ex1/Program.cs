using System;

namespace Ex1
{
    class Program
    {
        static void Main(string[] args)
        {
            int mois;
            int season = 0;
            bool stop = false;

            while(!stop)
            {
                Console.WriteLine("Saisir mois de l'annee");

                while (!int.TryParse(Console.ReadLine(), out mois))
                {
                    Console.WriteLine("Le mois doit être un entier");
                }

                //janvier mars hiver
                //avril juin printemps
                //juillet septembre ete
                // octobre decembre automne

                if (mois >= 1 && mois <= 3)
                {
                    season = 1;
                }
                else if (mois >= 4 && mois <= 6)
                {
                    season = 2;
                }
                else if (mois >= 7 && mois <= 9)
                {
                    season = 3;
                }
                else if (mois >= 10 && mois <= 12)
                {
                    season = 4;
                }

                switch (season)
                {
                    case 1:
                        Console.WriteLine("Hiver");
                        break;
                    case 2:
                        Console.WriteLine("Printemps");
                        break;
                    case 3:
                        Console.WriteLine("Ete");
                        break;
                    case 4:
                        Console.WriteLine("Automne");
                        break;
                    default:
                        Console.WriteLine("Saison inconnue");
                        break;
                }

                Console.WriteLine("Voulez-vous continuer ? oui ou non");
                if(Console.ReadLine() == "non")
                {
                    stop = true;
                }
            }
        }
    }
}
