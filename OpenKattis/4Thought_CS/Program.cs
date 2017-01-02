using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _Thought_CS
{
    public class Equations{
        public int result{get; set;}
        public string equation{get; set;}
    }

    public static class Implementations{

        //Calculate the value
        public int Calculate(int a, int b, ){

        }

        //Get list of all answers
        public List<Equations> AllList(){

        }

    }

    public class Program
    {
        public static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            List<int> input = new List<int>();
            List<Equations> all_Result = Implementations.AllList();

            while(num--){
                int n = int.Parse(Console.ReadLine());
                if(all_Result.Find(x => x.result == n) != null){
                    Console.WriteLine()
                }
            }
        }
    }
}
