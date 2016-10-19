using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Stars_Level
{
    class Stars
    {
        static void Main(string[] args)
        {
            Console.Write("Wpisz ilosc n: ");
            int n;
            n = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= n; i++)
            {
                for (int k = 1; k <= i; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();

            }


            Console.ReadKey();
        }
    }
}
