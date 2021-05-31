using System;
namespace Ex2
{
    public class AgeTest
    {
        public AgeTest()
        {
        }

        public bool majorityTest(int age)
        {
            bool result = false;

            if(age >= 18)
            {
                result = true;
            }

            return result;
        }

        public int ageCompute(int year)
        {
            int annee = DateTime.Now.Year;
            return annee - year;
        }

        public bool againCheck()
        {
            bool result = false;
            char validation;

            Console.WriteLine("Refaire une saisie ?");
            validation = Console.ReadKey().KeyChar;

            if (validation.Equals('y') || validation.Equals('Y'))
            {
                result = true;
            }

            return result;
        }
    }
}
