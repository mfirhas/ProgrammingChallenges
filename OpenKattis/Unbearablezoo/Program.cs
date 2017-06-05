using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

// Author: M. Fathir Irhas | OpenKattis | 02/06/2017

namespace Unbearablezoo
{
    class Program
    {
        static List<List<string>> ListOfAnimals(List<List<string>> list){

            List<List<string>> e = new List<List<string>>();

            foreach(var sublist in list){
                List<string> ee = new List<string>();
                for(int i=0;i<sublist.Count;i++){
                    string k = sublist[i].Split(' ').Last().ToLower();
                    ee.Add(k);
                }
                ee.Sort();
                e.Add(ee);
            }
            return e;
        }

        static void CountOfAnimals(List<List<string>> list){
            List<List<string>> loa = ListOfAnimals(list);
            for(int i=0;i<loa.Count;i++){
                Console.WriteLine("List "+(i+1)+":");
                var vc = from x in loa[i]
                            group x by x into g
                            let count = g.Count()
                            select new {Value = g.Key, Count= count};

                foreach(var x in vc){
                    Console.WriteLine(x.Value +" | "+x.Count);
                }
            }

        }

        static void Main(string[] args)
        {
            int num;
            string animal;
            List<List<string>> list = new List<List<string>>();
            while((num = Int32.Parse(Console.ReadLine())) != 0){
                List<string> l = new List<string>();
                for(int i=0;i<num;i++){
                    animal = Console.ReadLine();
                    l.Add(animal);
                }
                list.Add(l);
            }

            CountOfAnimals(list);
        }

    }
}
