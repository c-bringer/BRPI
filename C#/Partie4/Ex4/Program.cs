using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Part04_Ex4
{
    class Program
    {
        static void Main(string[] args)
        {
            int maxBJPoints = 21;
            int winNb = 3;

            int ia = 0;
            int player = 0;
            int more = 0, tmp = 0;
            bool finished = false;
            bool iaFinished = false;
            bool playerFinished = false;
            int playerScore = 0, iaScore = 0;
            char y = 'n';

            Random rnd = new Random();

            Console.WriteLine("You have to win " + winNb + " times to win...");

            do{
                //ia score
                //Console.WriteLine("ia turn");
                do
                {
                    more = rnd.Next(1, 14);
                    //Console.WriteLine("more1 : "+more);
                    if (more >=10) more = 10;
                    //Console.WriteLine("more2 : "+more);
                    tmp = ia + more;
                    if (tmp > 21)
                    {
                        iaFinished = true;
                    }
                    else
                    {
                        ia += more;
                    }
                    //Console.WriteLine(ia);

                } while (!iaFinished);

                Console.WriteLine("ia turn finished");

                //player score
                Console.WriteLine("Player turn");
                do
                {
                    for (int i=0; i<2; i++){
                        more = rnd.Next(1, 14);
                        //Console.WriteLine("more1 : "+more);
                        if (more >=10) more = 10;
                        //Console.WriteLine("more2 : "+more);
                        player += more;
                    }
                    Console.WriteLine("Your points are : " + player);
                
                    do {
                        Console.WriteLine("Do you need another card ?");
                        y = (char)Console.Read();
                        Console.ReadLine();
                        Console.WriteLine("y : " + y);
                        if (y != 'y')
                        {
                            playerFinished = true;
                        }
                        else
                        {
                            more = rnd.Next(1, 14);
                            //Console.WriteLine("new more1 : "+more);
                            if (more >=10) more = 10;
                            Console.WriteLine("new more : "+more);
                            player += more;
                        }
                        Console.WriteLine("Player Cards points are : " + player);
                    } while (y == 'y');
                } while (!playerFinished);

                Console.WriteLine("IA Cards points are : " + ia);

                // tests of end game
                if ((player > maxBJPoints) || (player <= ia))
                {
                    Console.WriteLine("IA wins this round");
                    iaScore++;
                } else 
                {
                    Console.WriteLine("You win this round");
                    playerScore++;
                }

                Console.WriteLine("Player Score points are : " + playerScore);
                Console.WriteLine("IA Score points are : " + iaScore);

                if (playerScore == winNb)
                {
                    finished = true;
                    Console.WriteLine("You win!!!");
                }
                else if (iaScore == winNb)
                {
                    finished = true;
                    Console.WriteLine("You lose!!!");
                }

                // init scores and boolean
                ia = 0;
                player = 0;
                iaFinished = false;
                playerFinished = false;

            } while (!finished);

            // Compare score & count the points


            //} while (ia<21);

            /*
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine(rnd.Next(1, 14));
            }*/


        }
    }
}
