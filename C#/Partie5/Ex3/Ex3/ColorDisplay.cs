using System;
namespace Ex3
{
    public class ColorDisplay
    {
        public ColorDisplay()
        {
        }


        public void hWorld()
        {
            int width = Console.WindowWidth;
            int height = Console.WindowHeight;

            Console.BackgroundColor = ConsoleColor.Red;
            Console.ForegroundColor = ConsoleColor.Yellow;


            for (int i = 0; i < width; i++)
            {
                for (int j = 0; j < height; i++)
                {
                    Console.Write("Hello World !!");
                }
            }
        }


        public void worldColorFullDisplay(String words, String textColor, String backgroundColor)
        {
            int width = Console.WindowWidth;
            int height = Console.WindowHeight;

            switch (textColor)
            {
                case "Red":
                    Console.ForegroundColor = ConsoleColor.Red;
                    break;
                case "Yellow":
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    break;
            }

            switch(backgroundColor)
            {
                case "Black":
                    Console.BackgroundColor = ConsoleColor.Black;
                    break;
                case "White":
                    Console.BackgroundColor = ConsoleColor.White;
                    break;
            }

            for (int i = 0; i < width; i++)
            {
                for (int j = 0; j < height; i++)
                {
                    Console.Write("{0}", words);
                }
            }
        }


        public void hFlag()
        {
            int width = Console.WindowWidth;
            int height = Console.WindowHeight;

            for (int i = 0; i < width; i++)
            {
                for (int j = 0; j < height / 3; i++)
                {
                    Console.BackgroundColor = ConsoleColor.Blue;
                    Console.Write(" ");
                }
            }
        }
    }
}
