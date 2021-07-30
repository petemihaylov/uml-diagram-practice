using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.InteropServices;
using System.Security.Principal;

class BinaryTree {
    public Node Root { get; set; }

    private List<int> result;
    public BinaryTree()
    {
        this.Root = new Node(20);
        this.Root.Left = new Node(8);
        this.Root.Left.Left = new Node(4);
        this.Root.Left.Right = new Node(12);
        this.Root.Left.Right.Left = new Node(10);
        this.Root.Left.Right.Right = new Node(14);

        this.Root.Right = new Node(22);

        this.result = new List<int>();
    }

    public List<int> TraverseInorder(Node node)
    {
        result.Clear();
        this.EachInorder(this.Root, value => result.Add(value));
        return result;
    }

    private void EachInorder(Node node, Action<int> action)
    {
        if (node == null)
        {
            return;
        }

        this.EachInorder(node.Left, action);     
        action(node.Key);
        this.EachInorder(node.Right, action);
    }

    public List<int> TraversePostorder(Node node)
    {
        result.Clear();
        this.EachPostorder(this.Root, value => result.Add(value));
        return result;
    }

    public List<int> TraversePreorder(Node node)
    {
        result.Clear();
        this.EachPreorder(this.Root, value => result.Add(value));
        return result;
    }

    private void EachPostorder(Node node, Action<int> action)
    {
        if (node == null)
        {
            return;
        }

        this.EachPostorder(node.Left, action);
        this.EachPostorder(node.Right, action);
        action(node.Key);
    }

    private void EachPreorder(Node node, Action<int> action)
    {
        if (node == null)
        {
            return;
        }
        
        action(node.Key);
        this.EachPreorder(node.Left, action);
        this.EachPreorder(node.Right, action);
    }
}