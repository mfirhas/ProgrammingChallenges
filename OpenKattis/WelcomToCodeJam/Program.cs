using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace WelcomToCodeJam
{
    class Program
    {
        static List<int> EnumerateIndexes(string s){
            int i = 0;
            List<int> l = new List<int>();
            foreach(char c in s){
                l.Add(i++);
            }
            return l;
        }

        static int CountText(string input, int indice=0){

            string Text = "welcome to code jam";
            int lenText = Text.Length;
            int count = 0;

            if(indice == lenText - 1){
                foreach(char i in input){
                    if(i == 'm')
                        count++;
                }
                return count;
            }

            List<int> IEnum = EnumerateIndexes(input);
            foreach(int i in IEnum){
                if(input[i] == Text[indice]){
                    count += CountText(input.Substring(i+1), indice+1);
                }
            }

            return count;
        }

        static void Main(string[] args)
        {
            int num = Convert.ToInt32(Console.ReadLine());

            for(int i=0;i<num;i++){
                string input = Console.ReadLine();
                int count = CountText(input);
                if(count < 10){
                    Console.WriteLine(String.Format("Case #{0}: 000{1}", i+1, count));
                }else if(count < 100){
                    Console.WriteLine(String.Format("Case #{0}: 00{1}", i+1, count));
                }else if(count < 1000){
                    Console.WriteLine(String.Format("Case #{0}: 0{1}", i+1, count));
                }else {
                    Console.WriteLine(String.Format("Case #{0}: {1}", i+1, count));
                }

            }

        }
    }
}
