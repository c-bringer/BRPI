using System;
using System.Collections.Generic;
using System.Text;

namespace Ex3
{
    class CoffeeTable : Table
    {
        public CoffeeTable(int width, int length, int height) : base(width, length, height)
        {
        }

        public void showData()
        {
            Console.WriteLine("CoffeeTable: ");
            base.showData();
        }
    }
}
