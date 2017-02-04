using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Substitute
{
    public class Substitute
    {
        public int getValue(String key, String code){
            string decoded = "";
            for(int i=0;i<code.Length;i++){
                if(key.ToUpper().Contains(code[i])){
                    int v = (key.ToUpper().IndexOf(code[i]) + 1)==10 ? 0 : key.ToUpper().IndexOf(code[i]) + 1;
                    decoded += v.ToString();
                }
            }
            int value_ = int.Parse(decoded);
            return value_;
        }

        public static void Main(string[] args)
        {
            Substitute s = new Substitute();
            string key = Console.ReadLine();
            string code = Console.ReadLine();
            Console.WriteLine(s.getValue(key,code));
        }
    }
}
