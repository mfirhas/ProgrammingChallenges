using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace LarryArray_CS
{
    public class Program
    {
        public static string DoSomething(int[] sublist){
            int inv = 0;
            for(int i=0;i<sublist.Length;i++){
                for(int j=i+1;j<sublist.Length;j++){
                    if(sublist[i] > sublist[j])
                        inv++;
                }
            }

            if(inv % 2 == 0){
                return "YES";
            }else{
                return "NO";
            }
        }

        public static void Main(string[] args)
        {
            int num;

            num = int.Parse(Console.ReadLine());
            int[][] list = new int[num][];
            for(int i=0;i<num;i++){
                int num2 = int.Parse(Console.ReadLine());
                string[] input = Console.ReadLine().Split();
                int[] sublist = new int[num2];
                for(int j=0;j<num2;j++){                    
                    sublist[j] = int.Parse(input[j]);
                }
                list[i] = sublist;
            }

            for(int i=0;i<list.GetLength(0);i++){
                Console.WriteLine(DoSomething(list[i]));
            }

        }
    }
}
