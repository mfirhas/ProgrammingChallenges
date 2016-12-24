using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace EvenTree_CS
{
    class Node
    {
        internal Node(int id){
            Id = id;
            Children = new List<Node>();
            ChildCount = 0;
        }

        internal int ChildCount{get; set;}
        internal IList<Node> Children {get; private set;}
        internal int Id{get; private set;}
    }

    public class Program
    {
        private static IDictionary<int, Node> nodeMap = new Dictionary<int, Node>();
        static Node tree;

        private static int Traverse(Node node)
        {
            int result = 0;
            foreach (var child in node.Children)
            {
                result += Traverse(child);
                
                if (child.ChildCount % 2 != 0)
                {
                    result++;
                }
                else
                {
                    node.ChildCount += child.ChildCount + 1;
                }
            }

            return result;
        }

        private static void AddEdge(Node node, int v2)
        {
            var child = new Node(v2);
            node.Children.Add(child);
            nodeMap[v2] = child;
        }

        private static void AddEdge(int v1, int v2)
        {
            if (nodeMap.ContainsKey(v1))
            {
                AddEdge(nodeMap[v1], v2);
            }
            else if (nodeMap.ContainsKey(v2))
            {
                AddEdge(nodeMap[v2], v1);
            }
            else
            {
                tree = new Node(v1);
                nodeMap[v1] = tree;
                AddEdge(tree, v2);
            }
        }

        public static void Main(string[] args)
        {
            string[] counts = Console.ReadLine().Split(' ');
            int M = int.Parse(counts[1]);
            while(M-- > 0)
            {
                string[] edge = Console.ReadLine().Split(' ');
                AddEdge(int.Parse(edge[0]), int.Parse(edge[1]));
            }

            int result = Traverse(tree);
            Console.WriteLine(result);
        }
    }
}
