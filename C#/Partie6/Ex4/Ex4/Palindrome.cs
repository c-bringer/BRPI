using System;

namespace Ex4
{
    public class Palindrome
    {
        public Palindrome()
        {
        }

        public String compress(String str)
        {
            return str.Replace(" ", "").Replace(",", "").Replace(".", "").Replace("'", "");
        }

        public String reverse(String str)
        {
            string reverseString = string.Empty;

            for (int i = str.Length - 1; i >= 0; i--)
            {
                reverseString += str[i];
            }

            return reverseString;
        }
    }
}
