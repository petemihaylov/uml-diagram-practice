class Node
{
    public int Key { get; set; }

    public Node Left { get; set; }

    public Node Right { get; set; }

    public Node(int key)
    {
        this.Key = key;
        this.Left = this.Right = null;
    }
}