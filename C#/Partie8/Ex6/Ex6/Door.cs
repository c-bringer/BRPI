using System;
using System.Collections.Generic;
using System.Text;

namespace Ex6
{
    class Door
    {
        private String _color { get; set; }

        public Door(String color = "marron")
        {
            this._color = color;
        }

        public void showData()
        {
            Console.WriteLine("La couleur de la porte est : {0}", _color);
        }
    }
}
