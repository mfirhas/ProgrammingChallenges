using System;
using System.Collections.Generic;
using System.Numerics;
using System.Linq;

namespace ConsoleApplication
{
    public static class Program
    {
      public static IEnumerable<string> Permutations(this string text)
      {
        return PermutationsImpl(string.Empty, text);
      }

      private static IEnumerable<string> PermutationsImpl(string start, string text)
      {
        if (text.Length <= 1)
          yield return start + text;
        else
        {
          for (int i = 0; i < text.Length; i++)
          {
            text = text[i] + text.Substring(0, i) + text.Substring(i + 1);
            foreach (var s in PermutationsImpl(start +
              text[0], text.Substring(1)))
              yield return s;
          }
        }
      }

      //New Way
      public static IEnumerable<IEnumerable<T>> GetPermutations<T>(this IEnumerable<T> enumerable)
    {
        var array = enumerable as T[] ?? enumerable.ToArray();

        var factorials = Enumerable.Range(0, array.Length + 1)
            .Select(Factorial)
            .ToArray();

        for (var i = 0L; i < factorials[array.Length]; i++)
        {
            var sequence = GenerateSequence(i, array.Length - 1, factorials);

            yield return GeneratePermutation(array, sequence);
        }
    }

    private static IEnumerable<T> GeneratePermutation<T>(T[] array, IReadOnlyList<int> sequence)
    {
        var clone = (T[]) array.Clone();

        for (int i = 0; i < clone.Length - 1; i++)
        {
            Swap(ref clone[i], ref clone[i + sequence[i]]);
        }

        return clone;
    }

    private static int[] GenerateSequence(long number, int size, IReadOnlyList<long> factorials)
    {
        var sequence = new int[size];

        for (var j = 0; j < sequence.Length; j++)
        {
            var facto = factorials[sequence.Length - j];

            sequence[j] = (int)(number / facto);
            number = (int)(number % facto);
        }

        return sequence;
    }

    static void Swap<T>(ref T a, ref T b)
    {
        T temp = a;
        a = b;
        b = temp;
    }

    private static long Factorial(int n)
    {
        long result = n;

        for (int i = 1; i < n; i++)
        {
            result = result * i;
        }

        return result;
    }

    // ---------------------------------------------
    static void GenerateAnagram(IList<string> result, string prefix, string src)
    {
        if (src.Length == 0)
        {
            result.Add(prefix);
            return;
        }

        for (int i = 0; i < src.Length; i++ )
        {
            string tempPrefix = src[i].ToString();
            string newSrc = src.Substring(0, i) + src.Substring(i + 1);
            var temp = new List<string>();
            GenerateAnagram(temp, tempPrefix, newSrc);
            foreach (var s in temp)
            {
                result.Add(prefix + s);
            }
        }
    }

    public static IEnumerable<string> GenerateAnagramAlt(string src)
    {
        if (src.Length == 0) yield break;
        if (src.Length == 1) yield return src;

        foreach (string rest in GenerateAnagramAlt(src.Substring(1)))
        {
            for (int i = 0; i < src.Length; i++)
            {
                string temp = rest.Substring(0, i) + src[0] + rest.Substring(i);
                yield return temp;
            }
        }
    }


    //--------------------------------------------------------------------------
        public static Dictionary<string, List<string>> GetAnagramEquivalents(List<string> InputArray)
        {
            Dictionary<string, List<string>> ReturnList = new Dictionary<string, List<string>>();
            for (int x = 0; x < InputArray.Count; ++x)
            {
                char[] InputCharArray=InputArray[x].ToCharArray();
                Array.Sort(InputCharArray);
                string InputString = new string(InputCharArray);
                if (ReturnList.ContainsKey(InputString))
               {
                   ReturnList[InputString].Add(InputArray[x]);
               }
               else
               {
                   ReturnList.Add(InputString, new List<string>());
                   ReturnList[InputString].Add(InputArray[x]);
               }
           }
           return ReturnList;
       }

      public static void Main(string[] args)
      {
      //   List<string> input = new List<string>();
      //   input.Add("at");
      //   input.Add("asd");
      //   input.Add("fdsdfsd");
      //   Dictionary<string, List<string>> anagram = GetAnagramEquivalents(input);
        //
      //   foreach(KeyValuePair<string, List<string>> pair in anagram){
      //     Console.WriteLine(pair.Key);
      //     // foreach(string str in pair.Value){
      //     //   Console.WriteLine(str);
      //     // }
      //   }
         Console.WriteLine("fathir".Substring(5,1));


        // var values2 = new[] { 'a', 'b', 'c', 'd', 'e', 'v', 'h', 'j', 'p' };
        // var valuess = new[] {'a','t'};
        //
        // foreach (var permutation in values2.GetPermutations())
        // {
        //     Console.WriteLine(string.Join("", permutation));
        // }

        // var result = new List<string>();
        // GenerateAnagram(result, "", "abcdefghijklmnopqrstuvwxyz");
        // // GenerateAnagramAlt("ABC");
        //
        // Console.WriteLine(result.Count);
        // foreach(string i in result){
          // Console.WriteLine(i);
        // }

      }


    }
}

// namespace ConsoleApplication{
//   public class Program{
//     public static void Main(string[] args){
//
//     }
//   }
// }
