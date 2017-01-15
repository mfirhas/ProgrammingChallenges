using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _048
{
    public class Program
    {
        // Movement
        // 0:left, 1:up, 2:right, 3:down

        // 0 -> Moveleft
        public static int[][] MoveLeft(int[][] initialState){
            int[][] initState = initialState;
            int[][] finalState = new int[4][];

            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(initState[i][j]!=0 && initState[i][j] == initState[i][j+1]){
                        finalState[i][j] += initState[i][j] + initState[i][j+1];
                    }else if(initState[i][j]!=0 && initState[i][j+1] == 0){
                        int k = j+1;
                        while(k<4 && initState[i][k]==0){
                            if(initState[i][j] == initState[i][k]){
                                finalState[i][j] = initState[i][j] + initState[i][k];
                            }
                            k++;
                        }
                    }
                }
            }
            
        }

        public static void Main(string[] args)
        {

        }
    }
}
