using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace volim
{
    public class Program
    {
    	public static int GetExplodedNumberedLabel(int maxTime, int init, int num, string[,] list){
    		int playerLbl = init;
    		int time = 0;
    		for(int i=0;i<num;i++){
    			time += int.Parse(list[i,0]);
    			if(time >= maxTime){
    				break;
    			}
    			if(list[i,1] == "T"){
    				playerLbl++;
    			}
    		}
    		playerLbl = playerLbl % 8;
    		playerLbl = playerLbl == 0 ? 8 : playerLbl;
    		return playerLbl;
    	}

        public static void Main(string[] args)
        {
        	int maxTime = 230; //3 minute 30 seconds
        	int init, num;
        	init = int.Parse(Console.ReadLine()); //input initial player
        	num = int.Parse(Console.ReadLine()); //input number of questions
        	string[,] list = new string[num,2]; //list contains all time and verdict
        	for(int i=0;i<num;i++){
        		string[] input = Console.ReadLine().Split();
        		list[i,0] = input[0];
        		list[i,1] = input[1];
        	}

        	int result = GetExplodedNumberedLabel(maxTime, init, num, list);
        	Console.WriteLine(result);
        }
    }
}
