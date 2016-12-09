using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Molekule
{
    public class Program
    {
		 public static int[] GetConcantenate(int[] a, int[] b){
			 var c = new int[a.Length + b.Length];
			 a.CopyTo(c, 0);
			 b.CopyTo(c, a.Length);
			 return c;
		 }

		 public static int GetMostOccuring(int[] arr){
			 var i = arr.GroupBy(v => v)
            		.OrderByDescending(g => g.Count())
            		.First()
            		.Key;
			 return i;
		 }

		 public static List<int> Kurwa(int[] a, int[] b, int most_occur){
			 List<int> _c_ = new List<int>();
			 int[] _a = Array.FindAll(a,delegate(int i){return i == most_occur;});
			 int[] _b = Array.FindAll(b,delegate(int j){return j == most_occur;});
			 if(_a.Length > _b.Length){
				 for(int i=0;i<a.Length;i++){
					 if(a[i] == most_occur){
						 _c_.Add(1);
					 }else{
						 _c_.Add(0);
					 }
				 }
			 }else if(_a.Length == _b.Length){
				 for(int j=0;j<a.Length;j++){
					 if(a[j] == most_occur){
						 _c_.Add(1);
					 }else{
						 _c_.Add(0);
					 }
				 }
			 }
			 else{
				 for(int k=0;k<b.Length;k++){
					 if(b[k] == most_occur){
						 _c_.Add(1);
					 }else{
						 _c_.Add(0);
					 }
				 }
			 }

			 return _c_;
		 }

        public static void Main(string[] args)
        {
			  int n;
			  n = int.Parse(Console.ReadLine());
			  int[] a = new int[n];
			  int[] b = new int[n];
			  string[] input;
			  for(int i=0;i<n-1;i++){
				  input = Console.ReadLine().Split();
				  a[i] = Convert.ToInt32(input[0]);
				  b[i] = Convert.ToInt32(input[1]);
			  }

			  int[] conct = GetConcantenate(a,b);
			  int most = GetMostOccuring(conct);
			  Console.WriteLine(most);
			  Console.WriteLine("-------------");

			  List<int> result = Kurwa(a,b,most);
			  for(int i=0;i<result.Count - 1;i++){
				  Console.WriteLine(result[i]);
			  }

        }
    }
}
