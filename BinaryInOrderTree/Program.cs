using System;
using System.ComponentModel.Design;

namespace BinaryInOrderTree
{
    class Program
    {
        static void Main(string[] args)
        {
           var tree = new BinaryTree();
           
           System.Console.Write("Inorder => ");
           tree.TraverseInorder(tree.Root).ForEach(item => Console.Write(item + " "));
           
           System.Console.Write("\n\nPostorder => ");
           tree.TraversePostorder(tree.Root).ForEach(item => Console.Write(item + " "));
          
           System.Console.Write("\n\nPreorder => ");
           tree.TraversePreorder(tree.Root).ForEach(item => Console.Write(item + " "));
          
        }
    }
}
