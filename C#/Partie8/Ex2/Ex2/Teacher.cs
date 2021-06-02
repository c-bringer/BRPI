using System;
using System.Collections.Generic;
using System.Text;

namespace Ex2
{
    class Teacher : Person
    {
        private String _subject;

        public Teacher() { }

        public void begin()
        {
            Console.WriteLine("Let's the lessons begin !!!");
        }
    }
}
