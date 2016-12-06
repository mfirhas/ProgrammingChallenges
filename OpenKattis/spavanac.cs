using System;
using System.IO;
using System.Collections.Generic;
using System.Text;
using System.Linq;

class Program
{
   public Tuple<int,int> GetResult(int h, int m){
      int _h = 0;
      int _m = 0;
      if(m<45){
         if(h==0){
            _h += 23;
            _m += ((60-45)+m);
         }else{
            _h += (h-1);
            _m += ((60-45)+m);
         }
      }else{
         if(h==0){
            // _h += 23;
            _m += m - 45;
         }else{
            // _h += (h-1);
            _m += m - 45;
         }
      }
      return new Tuple<int,int>(_h,_m);
   }
   static void main()
   {
      string[] input;
      input = Console.ReadLine().Split();
      int h = input[0];
      int m = input[1];
      Console.WriteLine(GetResult(h,m)+" "+GetResult(h,m));
   }
}
