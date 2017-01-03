using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace DetailedDifferences_CS
{
    public class Program
    {
        public static string Diff(string a, string b){
            string diff = "";
            for(int i=0;i<a.Length;i++){
                if(a[i] != b[i]){
                    diff += "*";
                }else{
                    diff += ".";
                }
            }
            return diff;
        }

        public static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            for(int i=0;i<num;i++){
                string a = Console.ReadLine();
                string b = Console.ReadLine();
                string c = Diff(a,b);
                Console.WriteLine(a);
                Console.WriteLine(b);
                Console.WriteLine(c);
            }
        }
    }
}
