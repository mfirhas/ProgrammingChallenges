using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace T9Spelling_CS
{
    public class Program
    {
        public static string GetSequenceCode(string s){
            var tpad_num = new Dictionary<char, int>(){
                {'a',2},
                {'b',2},
                {'c',2},
                {'d',3},
                {'e',3},
                {'f',3},
                {'g',4},
                {'h',4},
                {'i',4},
                {'j',5},
                {'k',5},
                {'l',5},
                {'m',6},
                {'n',6},
                {'o',6},
                {'p',7},
                {'q',7},
                {'r',7},
                {'s',7},
                {'t',8},
                {'u',8},
                {'v',8},
                {'w',9},
                {'x',9},
                {'y',9},
                {'z',9},
                {' ',0}
            };

            var tpad_seq = new Dictionary<char, string>(){
                {'a',"2"},
                {'b',"22"},
                {'c',"222"},
                {'d',"3"},
                {'e',"33"},
                {'f',"333"},
                {'g',"4"},
                {'h',"44"},
                {'i',"444"},
                {'j',"5"},
                {'k',"55"},
                {'l',"555"},
                {'m',"6"},
                {'n',"66"},
                {'o',"666"},
                {'p',"7"},
                {'q',"77"},
                {'r',"777"},
                {'s',"7777"},
                {'t',"8"},
                {'u',"88"},
                {'v',"888"},
                {'w',"9"},
                {'x',"99"},
                {'y',"999"},
                {'z',"9999"},
                {' ',"0"}
            };

            string code = "";
            for(int i=0;i<s.Length;i++){
                if(i==0){
                    code += tpad_seq[s[i]];
                }else{
                    if(tpad_num[s[i]] == tpad_num[s[i-1]]){
                        code += " " + tpad_seq[s[i]];
                    }else{
                        code += tpad_seq[s[i]];
                    }
                }
            }
            return code;
        }

        public static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            for(int i=0;i<num;i++){
                string s = Console.ReadLine();
                Console.WriteLine("Case #" + (i+1) + ": " + GetSequenceCode(s));
            }

        }
    }
}
