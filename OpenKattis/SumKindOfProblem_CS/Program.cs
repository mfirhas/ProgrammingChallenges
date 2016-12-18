using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

/* Author: Muhammad Fathir Irhas - 10/12/2016 */

namespace SumKindOfProblem
{
    public class Program
    {
			//Sum of first N positive integers
			public static int CalculateS1(int n){
				int sumS1=0;
				int i = 1;
				while(i<=n){
					sumS1 += i;
					i++;
				}
				return sumS1;
			}

			//Sum of first N odd integers
			public static int CalculateS2(int n){
				int sumS2 = 0;
				int i = 1;
				int counter = 1;
				while(counter <= n){
					if(i%2!=0){ //odd
						sumS2 += i;
						i++;
						counter++;
					}else{
						i++;
					}
				}
				return sumS2;
			}

			//Sum of first N even integers
			public static int CalculateS3(int n){
				int sumS3 = 0;
				int i = 2;
				int counter = 1;
				while(counter <= n){
					if(i%2==0){ //even
						sumS3 += i;
						i++;
						counter++;
					}else{
						i++;
					}
				}
				return sumS3;
			}


        public static void Main(string[] args)
        {
					List<int> n = new List<int>();
					int num = int.Parse(Console.ReadLine());
					for(int i=0;i<num;i++){
						string[] input = Console.ReadLine().Split();
						n.Add(int.Parse(input[1]));
					}

					for(int i=0;i<num;i++){
						Console.WriteLine((i+1)+" "+CalculateS1(n[i])+" "+CalculateS2(n[i])+" "+CalculateS3(n[i]));
					}

        }
    }
}
