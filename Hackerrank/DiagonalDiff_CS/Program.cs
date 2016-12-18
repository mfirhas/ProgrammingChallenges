using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.IO;

namespace DiagonalDiff_CS
{
    public class Program
    {
        public static int Diff(int[][] a){
            int d;
            int a_sum = 0;
            int b_sum = 0;
            for(int i=0;i<a.GetLength(0);i++){
                a_sum += a[i][i];
            }
            int l = a.GetLength(0)-1;
            for(int j=0;j<a.GetLength(0);j++){
                b_sum += a[j][l-j];
            }
            d = Math.Abs(a_sum-b_sum);
            return d;
        }

        public static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int[][] a = new int[n][];
            for(int a_i = 0; a_i < n; a_i++){
                string[] a_temp = Console.ReadLine().Split(' ');
                a[a_i] = Array.ConvertAll(a_temp,Int32.Parse);
            }

            int d = Diff(a);
            Console.WriteLine(d);
        }
    }
}
