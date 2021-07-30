using System;

namespace BinaryInOrderTree
{
    class Program
    {
        static void Main(string[] args)
        {
           var tree = new BinaryTree();
           
           // InOrder
           tree.TraverseInOrder(tree.Root).ForEach(item => Console.Write(item + " "));
        }
    }
}
