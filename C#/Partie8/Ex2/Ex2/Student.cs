using System;
using System.Collections.Generic;
using System.Text;

namespace Ex2
{
    class Student : Person
    {
        public Student() { }

        public void showAge()
        {
            Console.WriteLine("I'm {0} years old.", base.getAge());
        }

        public void gotoClass()
        {
            Console.WriteLine("I'm going to class.");
        }
    }
}
