using System;
using System.Collections.Generic;
using System.Text;

namespace Ex4
{
    class BigPhotoAlbum
    {
        private int _nbPage;

        public BigPhotoAlbum()
        {
            _nbPage = 64;
        }

        public int getNbPage()
        {
            return _nbPage;
        }
    }
}
