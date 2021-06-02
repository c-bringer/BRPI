using System;
using System.Collections.Generic;
using System.Text;

namespace Ex2
{
    class Person
    {
        private int _age;

        public Person() { }

        public void hello()
        {
            Console.WriteLine("hello");
        }

        public void setAge(int age)
        {
            _age = age;
        }

        public int getAge()
        {
            return _age;
        }
    }
}
