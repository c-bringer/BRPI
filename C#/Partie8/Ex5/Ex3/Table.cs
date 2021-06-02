using System;
using System.Collections.Generic;
using System.Text;

namespace Ex3
{
    public class Table
    {
        private int _width { get; set; }
        private int _length { get; set; }
        private int _height { get; set; }

        public Table(int width, int length, int height) 
        {
            this._width = width;
            this._length = length;
            this._height = height;
        }

        public void showData()
        {
            Console.WriteLine("Largeur: {0}", _width);
            Console.WriteLine("Longueur: {0}", _length);
            Console.WriteLine("Hauteur: {0}", _height);
        }
    }
}
