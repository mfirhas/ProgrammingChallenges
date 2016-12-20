using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace TimeConversion_CS
{
    public class Program
    {
        public static void ConvertTime(string time){
            if(time.Substring(0,2) == "12" && time.Substring(8,2) == "AM"){
                Console.WriteLine("00"+time.Substring(2,6));
            }else if(time.Substring(0,2) != "12" && time.Substring(8,2) == "PM"){
                int newTime = int.Parse(time.Substring(0,2)) + 12;
                Console.WriteLine(newTime.ToString() + time.Substring(2,6));
            }else{
                Console.WriteLine(time.Substring(0,8));
            }
        }


        public static void Main(string[] args)
        {
            string time;
            time = Console.ReadLine();
            ConvertTime(time);
        }
    }
}
