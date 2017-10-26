using System;
using System.Collections.Generic;
using System.Linq;

namespace FBI_UCN
{
    class Program
    {
        static string charset = "0123456789ACDEFHJKLMNPRTVWX";

        static Dictionary<char, char> confusionDigits = new Dictionary<char, char>(){
            {'B', '8'},
            {'G', 'C'},
            {'I', '1'},
            {'O', '0'},
            {'Q', '0'},
            {'S', '5'},
            {'U', 'V'},
            {'Y', 'V'},
            {'Z', '2'}
        };

        static Dictionary<char, int> base27map = new Dictionary<char, int>(){
            {'0', 0},
            {'1', 1},
            {'2', 2},
            {'3', 3},
            {'4', 4},
            {'5', 5},
            {'6', 6},
            {'7', 7},
            {'8', 8},
            {'9', 9},
            {'A', 10},
            {'C', 11},
            {'D', 12},
            {'E', 13},
            {'F', 14},
            {'H', 15},
            {'J', 16},
            {'K', 17},
            {'L', 18},
            {'M', 19},
            {'N', 20},
            {'P', 21},
            {'R', 22},
            {'T', 23},
            {'V', 24},
            {'W', 25},
            {'X', 26}
        };

        static string CheckConfusionDigits(string digits){

            char[] aDigits = digits.ToCharArray();

            int n = 0;
            foreach(char i in digits){
                foreach(KeyValuePair<char, char> item in confusionDigits)
                {
                    if(i == item.Key){
                        aDigits[n] = item.Value;
                    }
                }
                n++;
            }

            string correctedDigits = new string(aDigits);
            return correctedDigits;
        }

        static int[] ConvertToBase27Value(string correctedDigits){
            int[] b27arr = new int[correctedDigits.Length];

            int n = 0;
            foreach(char i in correctedDigits){
                b27arr[n] = base27map[i];
                n++;
            }

            return b27arr;
        }

        static bool VerifyCheckDigit(string correctedDigits, int[] b27arr){
            
            int check = (2*b27arr[0] + 4*b27arr[1] + 5*b27arr[2] + 7*b27arr[3] + 8*b27arr[4] + 10*b27arr[5] 
                        + 11*b27arr[6] + 13*b27arr[7]) % 27;
            if(base27map[correctedDigits[8]] == check){
                return true;
            } else {
                return false;
            }
        }


        /*
            def fromDigits(digits, b):
            """Compute the number given by digits in base b."""
            n = 0
            for d in digits:
                n = b * n + d
            return n
         */
        static int ConvertToBase27to10(string correctedDigits){
            string first8digits = correctedDigits.Remove(correctedDigits.Length - 1);

            int result = 0;
            foreach(char digit in first8digits)
                result = (result * charset.Length) + charset.IndexOf(digit);

            return result;
        }

        static void UCN_Parser(int index, string input){
            // 1. check for confusing digits
            string correctedDigits = CheckConfusionDigits(input);

            // 2. map to corresponding digits in base 27
            int[] b27arr = ConvertToBase27Value(correctedDigits);

            // 3. verify check digit
            bool checkDigit = VerifyCheckDigit(correctedDigits, b27arr);

            // 4. if true print its base 10 decimals, else print "Invalid"
            if(checkDigit) {
                Console.WriteLine(index + " " + ConvertToBase27to10(correctedDigits));
            }else {
                Console.WriteLine("Invalid");
            }
        }

        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            for(int i = 0;i<n;i++){
                string[] input = Console.ReadLine().Split();
                UCN_Parser(Convert.ToInt32(input[0]), input[1]);          
            }
        }
    }
}
