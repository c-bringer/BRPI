using System;
using System.Collections.Generic;
using System.Text;

namespace Ex6
{
    class SmallAppart : House
    {
        private int _area { get; set; }

        public SmallAppart(int area, String color = "marron") : base(area, color = "marron")
        {
            this._area = _area;
        }

        public void showData()
        {
            Console.WriteLine("Cet Appartement a une superficie de {0} m2", _area);
        }
    }
}
