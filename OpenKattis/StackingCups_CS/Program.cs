using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace StackingCups_CS
{
    public class Program
    {
        public static bool isNumeric(string g){
            int m;
            bool is_numeric = int.TryParse(g, out m);
            return is_numeric;
        }

        public static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            List<string> list = new List<string>();
            for(int i=0;i<num;i++){
                string input = Console.ReadLine();
                list.Add(input);
            }

            var dict = new Dictionary<int, string>();

            var whatever = new List<int>();
            for(int j=0;j<num;j++){
                string[] g = list[j].Split();
                if(isNumeric(g[0])){
                    int temp = int.Parse(g[0]) / 2;
                    dict[temp] = g[1];
                    // whatever.Add(temp);
                }else{
                    dict[int.Parse(g[1])] = g[0];
                    // whatever.Add(int.Parse(g[1]));
                }
            }

            var list_ = dict.Keys.ToList();
	        list_.Sort();
            foreach(var key in list_){
                Console.WriteLine(dict[key]);
            }

        }

    }
}
