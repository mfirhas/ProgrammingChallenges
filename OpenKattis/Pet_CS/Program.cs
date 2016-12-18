using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace ConsoleApplication
{
    public class Program
    {
        public static Tuple<int,int> GetResult(int[,] g){
          int[] r = new int[5];
          for(int i=0;i<5;i++){
            r[i] = g[i,0]+g[i,1]+g[i,2]+g[i,3];
          }
          int maxValue = r.Max();
          int maxIndex = r.ToList().IndexOf(maxValue);

          return new Tuple<int,int>(maxIndex, maxValue);
        }

        public static void Main(string[] args)
        {
            int[,] g = new int[5,4];

            for(int i=0;i<5;i++){
              string[] input = Console.ReadLine().Split();
              g[i,0] = int.Parse(input[0]);
              g[i,1] = int.Parse(input[1]);
              g[i,2] = int.Parse(input[2]);
              g[i,3] = int.Parse(input[3]);
            }
            int num = GetResult(g).Item1 + 1;
            int grades = GetResult(g).Item2;
            Console.WriteLine(num+" "+grades);

        }
    }
}
