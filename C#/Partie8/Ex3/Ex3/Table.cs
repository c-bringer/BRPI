using System;
using System.Collections.Generic;
using System.Text;

namespace Ex3
{
    class Table
    {
        private int _width;
        private int __length;
        private int _height;

        public Table(int width, int length, int height) 
        {
            _width = width;
            __length = length;
            _height = height;
        }

        public void showData()
        {
            Console.WriteLine("Largeur: {0}", this.getWidth());
            Console.WriteLine("Longueur: {0}", this.getLength());
            Console.WriteLine("Hauteur: {0}", this.getHeight());
        }

        public void setWidth(int width)
        {
            _width = width;
        }

        public int getWidth()
        {
            return _width;
        }

        public void setLength(int length)
        {
            __length = length;
        }

        public int getLength()
        {
            return __length;
        }

        public void setHeight(int height)
        {
            _height = height;
        }

        public int getHeight()
        {
            return _height;
        }
    }
}
