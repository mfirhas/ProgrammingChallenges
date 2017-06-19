using System;

namespace NeedForSpeed
{
    class Program
    {
        static double CalculateC(int[,] segments){
            return 0.0;
        }

        static void Main(string[] args)
        {
            int n,t;
            string[] input = Console.ReadLine().Split();
            n = Int32.Parse(input[0]);
            t = Int32.Parse(input[1]);
            int[,] segments = new int[n,2];
            for(int i=0;i<n;i++){
                string[] s = Console.ReadLine().Split();
                segments[i,0] = Int32.Parse(s[0]);
                segments[i,1] = Int32.Parse(s[1]);
            }

            
        }

        //END
    }
}
