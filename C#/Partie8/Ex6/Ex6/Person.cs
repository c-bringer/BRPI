using System;
using System.Collections.Generic;
using System.Text;

namespace Ex6
{
    class Person
    {
        private String _name { get; set; }
        private House _house { get; set; }
        private Door _door { get; set; }

        public Person(String name, House house, Door door)
        {
            this._name = name;
            this._house = house;
            this._door = door;
        }

        public void showData()
        {
            _house.showData();
            _door.showData();
        }
    }
}
