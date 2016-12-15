package test;

import java.util.*;

public class binaryTree {
    
    public static List<Integer> myList = new ArrayList<Integer>();
    
    public static void main(String[] args) {

        Node root = new Node(4);
        root.left = new Node(5);
        root.left.left = new Node(4);
        root.left.left.left = new Node(5);
        root.left.right = new Node(5);
        root.right = new Node(3);
        root.right.left = new Node(6);
        root.right.right = new Node(7);

        binaryTree b = new binaryTree();
        System.out.println("Depth-First-Search : ");
        int maxdepth = b.depth(root);
        System.out.println(maxdepth);
        
        maxdepth = b.distinctMaxDepth(root);
        System.out.println(maxdepth+1);
        
        System.out.println("*******");
        int i;
        for (i = 0 ; i < myList.size(); i++) {
            System.out.println(myList.get(i));
        }
        
        b.DFS(root);
        b.BFS(root);
    }

    public void BFS(Node root) {
        List<Node> queue = new LinkedList<>();

        if (root == null) 
            return;

        queue.add(root);

        while (!queue.isEmpty()) {
            Node n = queue.remove(0);

            if (n.left != null)
                queue.add(n.left);
            if (n.right != null)
                queue.add(n.right);
            
            System.out.print(" " + n.data);
        }
    }
    
    public void DFS(Node root) {
        Stack<Node> s = new Stack<Node>();
        
        if (root == null) 
            return;
        
        s.add(root);
        while (s.isEmpty() == false) {
            Node x = s.pop();
            if(x.right!=null) 
                s.add(x.right);
            if(x.left!=null) 
                s.add(x.left);          
            System.out.print(" " + x.data);
        }
    }
    
    public int depth(Node root)
    {
          if (root == null) 
              return 0;
          int left_height = depth(root.left);
          int right_height = depth(root.right);
      
          if (left_height > right_height) {
              return left_height + 1;
          } 
          else {
              return right_height + 1;
          }
    }
    
    public int distinctMaxDepth(Node root)
    {
        if(root == null)
            return 0;

        int left_height = distinctMaxDepth(root.left);
        int right_height = distinctMaxDepth(root.right);
        
        if (left_height > right_height) {
            if(!myList.contains(root.data)) {
                myList.add(root.data);
                return left_height + 1;
            } else {
                return left_height;
            }
        } else {
            if(!myList.contains(root.data)) {
                myList.add(root.data);
                return right_height + 1;
            } else {
                return right_height;
            }
        }
    }
}

class Node {
    int data;
    Node left;
    Node right;

    public Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}

