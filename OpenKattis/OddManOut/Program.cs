using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

// Author: Muhammad Fathir Irhas - 26/01/2017 - OpenKattis

namespace OddManOut
{
    public class Program
    {
        public static void ManOut(List<int> list, int num_case){
            var dict = list.GroupBy(i => i).ToDictionary(g => g.Key, g => g.Count());
            var key = dict.Where(p => p.Value == 1).Select(p => p.Key);
            Console.WriteLine("Case #"+num_case+": "+key.First());
        }
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for(int i=0;i<n;i++){
                int num = int.Parse(Console.ReadLine());
                List<int> list = new List<int>();
                string[] input = Console.ReadLine().Split();
                list = input.Select(int.Parse).ToList();
                ManOut(list, i+1);
            }
        }
    }
}
