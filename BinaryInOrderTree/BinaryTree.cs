using System;
using System.Collections.Generic;


class BinaryTree
{
    public Node Root { get; set; }

    public BinaryTree()
    {
        this.Root = new Node(20);
        this.Root.Left = new Node(8);
        this.Root.Left.Left = new Node(4);
        this.Root.Left.Right = new Node(12);
        this.Root.Left.Right.Left = new Node(10);
        this.Root.Left.Right.Right = new Node(14);

        this.Root.Right = new Node(22);
    }


    public List<int> TraverseInOrder(Node node)
    {
        List<int> result = new List<int>();
        this.EachInOrder(this.Root, value => result.Add(value));
        return result;
    }


    private void EachInOrder(Node node, Action<int> action)
    {
        if (node == null)
        {
            return;
        }

        this.EachInOrder(node.Left, action);
        action(node.Key);
        this.EachInOrder(node.Right, action);
    }
}