using System;
using System.Collections.Generic;
using System.Linq;

namespace IslandHopping
{
    class Program
    {
        static double CalculateDistance(double x, double y) {
            return Math.Sqrt(Math.Pow(x,2) + Math.Pow(y,2));
        }

        static List<double> GetAllDistances(List<double[]> coord) {

            List<double> distances = new List<double>();
            for(int i=0; i < coord.Count - 1; i++) {
                for(int j=i+1; j < coord.Count; j++) {
                    double x = coord[i][0] - coord[j][0];
                    double y = coord[i][1] - coord[j][1];
                    distances.Add(CalculateDistance(x,y));
                }    
            }
            distances.Sort();
            return distances;
        }

        static double GetTotalMinimumLength(List<double[]> listOfCoord) {

            var distances = GetAllDistances(listOfCoord);


            int totalBridges = listOfCoord.Count - 1;
            List<double> newList = distances.GetRange(0,totalBridges);
            return newList.Sum();
        }

        static void Main(string[] args)
        {
            // List<double[]> a = new List<double[]>();
            // a.Add(new double[] {0.0, 0.0});
            // a.Add(new double[] {0.0, 1.0});
            // a.Add(new double[] {1.0, 0.0});

            // List<double> d = GetAllDistances(a);
            // foreach(double i in d) {
            //     Console.WriteLine(i);
            // }

            // Console.WriteLine("----");
            // Console.WriteLine(GetTotalMinimumLength(a));

            int n = int.Parse(Console.ReadLine()); // total cases
            List<double[]> listOfCoord = new List<double[]>();
            for(int i=0;i<n;i++) {
                int m = int.Parse(Console.ReadLine()); // total coordinates
                for(int j=0;j<m;j++) {
                    string[] inputcoord = Console.ReadLine().Split(); // input coordinate
                    double[] coord = inputcoord.Select<string, double>(s => Double.Parse(s)).ToArray<double>();
                    listOfCoord.Add(coord);
                }
                Console.WriteLine(GetTotalMinimumLength(listOfCoord));
            }
            // ----

        }
    }
}
