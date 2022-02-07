using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace misbahtask
{
    class Program
    {
        static void Main(string[] args)
        {

            for (int i = 2; i <= 25; i++)
            {

                if (i == 13 || i == 16 || i == 19)
                {
                    continue;

                }
                if (i == 23)
                {
                    break;
                }
                Console.WriteLine(i);

            }
            //
            int sum = Int32.MinValue;
            int sum1 = Int32.MaxValue;

           

            for (int i = 1; i <= 5; i++)
            {
                Console.WriteLine("Enter " + i + " Number");
                int num = Convert.ToInt32(Console.ReadLine());

                if (num > sum)
                {
                    sum = num;

                }
                if (num < sum1)
                {
                    sum1 = num;

                }

            }
            Console.WriteLine("largest value " + sum);
            Console.WriteLine("smallest value " + sum1);

            Console.ReadKey();

        }
    }
}
