using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SymetricOrder_CS
{
    public class Program
    {
			public static List<List<string>> GetSymetricOrder(List<List<string>> main_list){
				List<List<string>> new_main_list = new List<List<string>>();
				for(int i=0;i<main_list.Count;i++){
					List<string> list = new List<string>();
					for(int j=0;j<main_list[i].Count;j+=2){
						list.Add(main_list[i][j]);
					}
					if(main_list[i].Count % 2 == 0){
						for(int k = main_list[i].Count-1;k>=0;k-=2){
							list.Add(main_list[i][k]);
						}
					}else{
						for(int l = main_list[i].Count-2;l>=0;l-=2){
							list.Add(main_list[i][l]);
						}
					}
					new_main_list.Add(list);
				}
				return new_main_list;
			}

			public static void Display(List<List<string>> new_main_list){
				int i = 1;
				foreach(var list in new_main_list){
					Console.WriteLine("SET "+i);
					foreach(var s in list){
						Console.WriteLine(s);
					}
					i++;
				}
			}

        public static void Main(string[] args)
        {
					int num;
					List<List<string>> main_list = new List<List<string>>();
					while((num = int.Parse(Console.ReadLine()))!=0){
						List<string> list = new List<string>();
						for(int i=0;i<num;i++){
							string input = Console.ReadLine();
							list.Add(input);
						}
						main_list.Add(list);
					}

					List<List<string>> SymetricOrder = GetSymetricOrder(main_list);
					if(SymetricOrder != null){
							Display(SymetricOrder);
					}

					// if(SymetricOrder!=null){
					// 	Console.WriteLine("List is not empty");
					// }
					// for(int i=0;i<SymetricOrder.Count;i++){
					// 	Console.WriteLine("SET"+(i+1));
					// 	for(int j=0;j<SymetricOrder[i].Count;j++){
					// 		Console.WriteLine(SymetricOrder[i][j]);
					// 	}
					// }

        }

    }
}
