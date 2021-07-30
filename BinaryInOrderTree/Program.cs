using System;

namespace BinaryInOrderTree
{
    class Program
    {
        static void Main(string[] args)
        {
           var tree = new BinaryTree();
           
           /* Inorder (Left, Root, Right) */
           tree.TraverseInorder(tree.Root).ForEach(item => Console.Write(item + " "));
           
           /* Postorder (Left, Right, Root) */
           // tree.TraversePostorder(tree.Root).ForEach(item => Console.Write(item + " "));
          
           /* Preorder (Root, Left, Right) */
           // tree.TraversePreorder(tree.Root).ForEach(item => Console.Write(item + " "));
          
        }
    }
}
