using System;
using System.Collections.Generic;
using System.Text;

namespace Ex4
{
    class PhotoAlbum
    {
        private int _nbPage;

        public PhotoAlbum(int nbPage = 16)
        {
            _nbPage = nbPage;
        }

        public int getNbPage()
        {
            return _nbPage;
        }
    }
}
