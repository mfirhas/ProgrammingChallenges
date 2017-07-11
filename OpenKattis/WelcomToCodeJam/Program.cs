using System;

namespace WelcomToCodeJam
{
    class Program
    {
        static int CountText(string input, int indice=0){
            string Text = "welcome to code jam";
            int lenText = Text.Length;
            int count = 0;

            if(indice == lenText-1){
                if(input[indice] == 'm'){
                    count += 1;
                }
            }

            
            
        }

        static void Main(string[] args)
        {
            
        }
    }
}
