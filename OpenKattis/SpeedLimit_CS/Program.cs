//Author: Muhammad Fathir Irhas - 2/12/2016

﻿using System;
using System.Collections.Generic;

namespace ConsoleApplication
{
    public class Program
    {
        public static int CalculateDist(List<int> speed, List<int> time){
          int dist = 0;
          for(int i=0;i<speed.Count;i++){
            if(i==0){
              dist += (speed[i] * time[i]);
            }else{
              dist += (speed[i] * (time[i] - time[i-1]));
            }
          }
          return dist;
        }

        public static void Main(string[] args)
        {
            int t = 0;
            List<int> distance = new List<int>();
            List<int> speed = new List<int>();
            List<int> time = new List<int>();
            while(t!=-1){
              t = Convert.ToInt32(Console.ReadLine());
              for(int i=0;i<t;i++){
                string[] s = Console.ReadLine().Split();
                speed.Add(int.Parse(s[0]));
                time.Add(int.Parse(s[1]));
              }
              distance.Add(CalculateDist(speed, time));
              speed.Clear();
              time.Clear();

              if(t == -1){
                for(int i=0;i<distance.Count -1;i++){
                  Console.WriteLine(distance[i]+" miles");
                }
                break;
              }

            }
        } //end Main
    } //end class
} //end namespace
