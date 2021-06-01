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
                Console.WriteLine("X");
                info = Console.ReadKey(true);

                switch(info.Key)
                {
                    case ConsoleKey.UpArrow:
                        Console.MoveBufferArea(0, 0, Console.BufferWidth, Console.BufferHeight, 1, 0);
                        break;
                    case ConsoleKey.DownArrow:
                        Console.MoveBufferArea(0, 1, Console.BufferWidth, Console.BufferHeight, 1, 0);
                        break;
                    case ConsoleKey.RightArrow:
                        Console.MoveBufferArea(1, 0, Console.BufferWidth, Console.BufferHeight, 1, 0);
                        break;
                    case ConsoleKey.LeftArrow:
                        Console.MoveBufferArea(0, 0, Console.BufferWidth, Console.BufferHeight, 1, 0);
                        break;
                    default:
                        Console.WriteLine("Mauvaise saisie");
                        break;
                }
            } while (info.Key != ConsoleKey.X);
        }
    }
}
