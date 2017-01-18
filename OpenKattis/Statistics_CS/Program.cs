using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

// Author: Muhammad Fathir Irhas - 18/01/2017 - OpenKattis

namespace Statistics_CS
{
    public class Program
    {
        public static void AnalyzeData(int[] data, int i){
            Console.WriteLine("Case "+i+": "+data.Min()+" "+data.Max()+" "+(data.Max()-data.Min()));
        }

        public static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int c = 1;
            while(!string.IsNullOrEmpty(input)){
                int iter = 1;
                string[] data_input = input.Split();
                int[] data = new int[data_input.Length-1];
                for(int i=0;i<data.Length;i++){
                    data[i] = int.Parse(data_input[iter]);
                    iter++;
                }
                AnalyzeData(data,c);
                c++;
                input = Console.ReadLine();
            }
        }
    }
}
