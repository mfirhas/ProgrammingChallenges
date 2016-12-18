using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

// Author: Muhammad Fathir Irhas - 12/07/2016

namespace ladder
{
    public class Program
    {
		 public static double ConvertToRadians(double angle)
		 {
	 		 return (Math.PI / 180) * angle;
		 }

		 public static int GetLadderLength(int h, int v){
			 double _h = (double)h;
			 double v_ = (double)v;
			 double _v = ConvertToRadians(v_);
			 // h/Sin(v)
			 double l = _h/Math.Sin(_v);
			 double _l = Math.Ceiling(l);
			 int __l = (int)_l;
			 return __l;
		 }

        public static void Main(string[] args)
        {
			  string[] input = Console.ReadLine().Split();
			  int h = Convert.ToInt32(input[0]);
			  int v = Convert.ToInt32(input[1]);
			  Console.WriteLine(GetLadderLength(h,v));
        }
    }
}
