using System;
using System.Collections.Generic;

namespace Ex7
{
    class Program
    {
        static void Main(string[] args)
        {
            List<String> courses = new List<String>();
            int choice;

            do
            {
                choice = displayMenu();

                switch (choice)
                {
                    case 1:
                        Console.WriteLine("Saisir produit à ajouter");
                        String productAdd = Console.ReadLine();
                        addCourses(productAdd, courses);
                        break;
                    case 2:
                        displayCourses(courses);
                        break;
                    case 3:
                        Console.WriteLine("Saisir produit à suppr");
                        String productSuppr = Console.ReadLine();
                        removeCourses(productSuppr, courses);
                        break;
                    default:
                        Console.WriteLine("Mauvais choix");
                        break;
                }
            } while (choice != 4);
        }

        static void displayCourses(List<String> courses)
        {
            Console.WriteLine("Voici la liste");
            foreach(String course in courses)
            {
                Console.WriteLine("{0}", course);
            }
        }

        static void addCourses(String product, List<String> courses)
        {
            courses.Add(product);
        }

        static void removeCourses(String product, List<String> courses)
        {
            courses.Remove(product);
        }

        static int displayMenu()
        {
            int saisie;

            Console.WriteLine("Que voulez vous faire ?");
            Console.WriteLine("1. Ajouter");
            Console.WriteLine("2. voir la liste");
            Console.WriteLine("3. supprimer");
            Console.WriteLine("4. quitter");

            while (!int.TryParse(Console.ReadLine(), out saisie))
            {
                Console.WriteLine("La valeur doit être un entier");
            }

            return saisie;
        }
    }
}
