using System;

namespace Ex4
{
    class Program
    {
        static void Main(string[] args)
        {
            PhotoAlbum petit = new PhotoAlbum();
            Console.WriteLine("{0} pages", petit.getNbPage());

            PhotoAlbum moyen = new PhotoAlbum(32);
            Console.WriteLine("{0} pages", moyen.getNbPage());

            BigPhotoAlbum grand = new BigPhotoAlbum();
            Console.WriteLine("{0} pages", grand.getNbPage());
        }
    }
}
