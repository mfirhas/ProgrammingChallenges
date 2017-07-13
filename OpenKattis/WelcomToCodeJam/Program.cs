using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace WelcomToCodeJam
{
    class Program
    {
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

            
            
        }

        static void Main(string[] args)
        {
            
        }
    }
}
