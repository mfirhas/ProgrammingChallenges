using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace ConsoleApplication
{
    public class Program
    {
		 public static bool CheckIfSumIsX2(int n, int x){
			 int sum = 0;
			 while (n != 0) {
    			sum += n % 10;
    			n /= 10;
			 }

			 if(sum == x){
				 return true;
			 }else{
				 return false;
			 }
		 }

		 public int GetSmallestSum(List<int> input)
		 {
			 int smallest = 0;
			 for(int i=input[0]; i<=input[1]; i++){
				 if(CheckIfSumIsX2(i, input[2]) == true){
					 smallest += i;
					 break;
			 	 }
			 }
			 return smallest;
		 }

		 public int GetHighestSum(List<int> input)
		 {
			 int highest = 0;
			 for(int i=input[1]; i>=input[0]; i--){
				 if(CheckIfSumIsX2(i, input[2]) == true){
					 highest += i;
					 break;
				 }
			 }
			 return highest;
		 }

        public static void Main(string[] args)
        {
			  	Program p = new Program();
				// int smallest = 0;
				// int highest  = 0;
            var input = new List<int>();
            for(int i=0;i<3;i++){
               string x = Console.ReadLine();
               input.Add(Convert.ToInt32(x));
            }
				Console.WriteLine(p.GetSmallestSum(input));
				Console.WriteLine(p.GetHighestSum(input));
        }
    }
}
