using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace DifferentDistances_CS
{
    public class Program
    {
        public static void Main(string[] args)
        {
            // string[] input;
            while(true){
                string[] input = Console.ReadLine().Split();
                if(double.Parse(input[0]) == 0){
                    break;
                }
                double x1 = double.Parse(input[0]);
                double y1 = double.Parse(input[1]);
                double x2 = double.Parse(input[2]);
                double y2 = double.Parse(input[3]);
                double p  = double.Parse(input[4]);
                double d  = Math.Pow((Math.Pow(Math.Abs(x1-x2),p)+Math.Pow(Math.Abs(y1-y2),p)),1/p);
                Console.WriteLine(d.ToString("F10"));
            }
        }
    }
}
