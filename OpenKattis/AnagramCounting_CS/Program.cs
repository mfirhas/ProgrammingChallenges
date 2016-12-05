//Author: Muhammad Fathir Irhas - 2/12/2016 - OpenKattis

using System;
using System.Numerics;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApplication
{
    public class Program
    {
        public static BigInteger Factorial(BigInteger i){
          if(i.CompareTo(new BigInteger(1))==0){
            return new BigInteger(1);
          }else{
            return BigInteger.Multiply(i, Factorial(BigInteger.Subtract(i, new BigInteger(1))));
          }
        }

        public static string CountAnagram(string s){
          var d = new Dictionary<string, int>();
          for(int i=0;i<s.Length;++i){
            if(d.ContainsKey(s.Substring(i,1))){
               int c = (int)d[s.Substring(i,1)];
               // d.Add(s.Substring(i,1), c+1); //No Duplicate Key allowed
               d[s.Substring(i,1)] = c+1; //Duplicate key allowed
            }else{
               d.Add(s.Substring(i,1), 1);
            }
          }

          BigInteger anagram_count = Factorial(new BigInteger(s.Length));
          BigInteger a = new BigInteger(1);
          foreach(KeyValuePair<string, int> kvp in d){
             a = BigInteger.Multiply(a, Factorial(new BigInteger((int)kvp.Value)));
          }
          anagram_count = BigInteger.Divide(anagram_count,a);
          return anagram_count.ToString();
        }

        public static void Main(string[] args)
        {
           string input;
           List<string> input_list = new List<string>();
           while((input = Console.ReadLine()) != null){
             input_list.Add(input);

           }//endwhile

          foreach(string str in input_list){
            Console.WriteLine(CountAnagram(str));
          }

        }


    }
}
