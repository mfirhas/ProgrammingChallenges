using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace NewAlphabet_CS
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Dictionary<char,string> table = new Dictionary<char,string>(){
                {'a',"@"}, {'A',"@"},
                {'b',"8"}, {'B',"8"},
                {'c',"("}, {'C',"("},
                {'d',"|)"}, {'D',"|)"},
                {'e',"3"}, {'E',"3"},
                {'f',"#"}, {'F',"#"},
                {'g',"6"}, {'G',"6"},
                {'h',"[-]"}, {'H',"[-]"},
                {'i',"|"}, {'I',"|"},
                {'j',"_|"}, {'J',"_|"},
                {'k',"|<"}, {'K',"|<"},
                {'l',"1"}, {'L',"1"},
                {'m',"[]\\/[]"}, {'M',"[]\\/[]"},
                {'n',"[]\\[]"}, {'N',"[]\\[]"},
                {'o',"0"}, {'O',"0"},
                {'p',"|D"}, {'P',"|D"},
                {'q',"(,)"}, {'Q',"(,)"},
                {'r',"|Z"}, {'R',"|Z"},
                {'s',"$"}, {'S',"$"},
                {'t',"']['"}, {'T',"']['"},
                {'u',"|_|"}, {'U',"|_|"},
                {'v',"\\/"}, {'V',"\\/"},
                {'w',"\\/\\/"}, {'W',"\\/\\/"},
                {'x',"}{"}, {'X',"}{"},
                {'y',"`/"}, {'Y',"`/"},
                {'z',"2"}, {'Z',"2"}
            };

            string input = Console.ReadLine();
            string output = "";
            for(int i=0;i<input.Length;i++){
                if(table.ContainsKey(input[i]) == true){
                    output += table[input[i]];
                }else{
                    output += input[i];
                }
            }

            Console.WriteLine(output);

        }
    }
}
