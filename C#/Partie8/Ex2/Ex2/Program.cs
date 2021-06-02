using System;

namespace Ex2
{
    class Program
    {
        static void Main(string[] args)
        {
            Person person = new Person();
            person.hello();

            Student student = new Student();
            student.setAge(21);
            student.hello();
            student.showAge();

            Teacher teacher = new Teacher();
            teacher.setAge(30);
            teacher.hello();
            teacher.begin();
        }
    }
}
