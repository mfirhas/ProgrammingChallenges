using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Bela
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Dictionary<char, int> dominant = new Dictionary<char, int>(){
                {'A', 11},
                {'K', 4},
                {'Q', 3},
                {'J', 20},
                {'T', 10},
                {'9', 14},
                {'8', 0},
                {'7', 0}
            };

            Dictionary<char, int> not_dominant = new Dictionary<char, int>(){
                {'A', 11},
                {'K', 4},
                {'Q', 3},
                {'J', 2},
                {'T', 10},
                {'9', 0},
                {'8', 0},
                {'7', 0}
            };

            string[] input = Console.ReadLine().Split();
            int num = int.Parse(input[0]);
            char suit = input[1][0];
            int points = 0;

            for(int i=0;i<num*4;i++){
                string n = Console.ReadLine();
                if(n[1] == suit){
                    points += dominant[n[0]];
                }else{
                    points += not_dominant[n[0]];
                }
            }//endif
            Console.WriteLine(points);
        }
    }
}
