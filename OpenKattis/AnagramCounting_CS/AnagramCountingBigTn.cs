// private static void Swap(ref char a, ref char b)
// {
//   if (a == b) return;
//
//   a ^= b;
//   b ^= a;
//   a ^= b;
// }
//
// public static void Permutate(char[] list)
// {
//   int x = list.Length - 1;
//   Permutate(list, 0, x);
// }
//
// private static void Permutate(char[] list, int k, int m)
// {
//   if (k == m)
//   {
//     Console.WriteLine(list);
//   }
//   else{
//     for (int i = k; i <= m; i++)
//     {
//       Swap(ref list[k], ref list[i]);
//       Permutate(list, k + 1, m); //Recursively Looped
//       Swap(ref list[k], ref list[i]);
//     }
//   }
// }
