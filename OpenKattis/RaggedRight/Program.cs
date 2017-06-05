using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace RaggedRight
{
    class Program
    {
        static string LongestLine(List<string> p){
            return p.OrderByDescending(s => s.Length).First();
        }

        static int Raggedness(List<string> p){
            int score = 0;
            for(int i=0;i<p.Count - 1;i++){
                score += (int)Math.Pow((LongestLine(p).Length - p[i].Length),2);  
            }
            return score;
        }

        static void Main(string[] args)
        {
            string p;
            List<string> lp = new List<string>();
            while((p = Console.ReadLine()) != null){
                lp.Add(p);
            }
            Console.WriteLine(Raggedness(lp));
        }


    }
}
