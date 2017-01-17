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

        public static void Display(int[][] fState){
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    Console.WriteLine(fState[i][j]+" ");
                }
                Console.WriteLine();
            }
        }

        // 0 -> Moveleft
        public static int[][] MoveLeft(int[][] initialState){
            int[][] initState = initialState;
            int[][] finalState = new int[4][];

            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    int k = j+1;
                    while(initState[i][k] == 0 && k<4){
                        if(initState[i][j] == initState[i][k]){
                            finalState[i][j] = initState[i][j] + initState[i][k];
                            initState[i][k] = 0;
                        }else if(initState[i][j] == 0 && initState[i][k]!=0){
                            finalState[i][j] = initState[i][j] + initState[i][k];
                            initState[i][k] = 0;
                        }else if(initState[i][j] != 0 && initState[i][j]!=initState[i][k]){
                            break;
                        }else if(k == 3){
                            break;
                        }
                        k++;
                    }
                }
            }
            return finalState;
        }

        public static void Main(string[] args)
        {
            string[] firstLine = Console.ReadLine().Split();
            string[] secondLine = Console.ReadLine().Split();
            string[] thirdLine = Console.ReadLine().Split();
            string[] fourthLine = Console.ReadLine().Split();

            int[][] iState = new int[4][];
            for(int i=0;i<4;i++){
                iState[0][i] = int.Parse(firstLine[i]);
            }

            for(int i=0;i<4;i++){
                iState[1][i] = int.Parse(secondLine[i]);
            }

            for(int i=0;i<4;i++){
                iState[2][i] = int.Parse(thirdLine[i]);
            }

            for(int i=0;i<4;i++){
                iState[3][i] = int.Parse(fourthLine[i]);
            }

            int[][] fState = MoveLeft(iState);
            Display(fState);

        }
    }
}
