using System;
using System.Collections.Generic;
using System.Text;

namespace Ex6
{
    class House
    {
        private int _area { get; set; }
        public Door _door { get; set; }

        public House(int area, String color = "marron")
        {
            this._area = area;
            this._door = new Door(color);
        }

        public void showData()
        {
            Console.WriteLine("Cette maison a une superficie de {0} m2", _area);
        }
    }
}
