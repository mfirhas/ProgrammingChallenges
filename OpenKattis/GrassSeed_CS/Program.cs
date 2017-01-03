using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

//Author: Muhammad Fathir Irhas - OpenKattis - 3/1/2017

namespace GrassSeed_CS
{
    public class Program
    {
        public static void Main(string[] args)
        {
            double cost = double.Parse(Console.ReadLine());
            int num = int.Parse(Console.ReadLine());
            double total_cost = 0;
            for(int i=0;i<num;i++){
                string[] input = Console.ReadLine().Split();
                total_cost += cost * double.Parse(input[0]) * double.Parse(input[1]);
            }
            Console.WriteLine(total_cost.ToString("F6"));
        }
    }
}
