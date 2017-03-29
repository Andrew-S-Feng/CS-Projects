package hw6;

import java.util.*;

import solution.hw6.TreeNode;


public class TreeNode implements Comparable<TreeNode>
{
	private String					name;
	private TreeNode				parent;
	private TreeSet<TreeNode> 		children;
	
	
	TreeNode(String name)
	{
		this.name = name;
		this.children = new TreeSet<>();
	}
	
	
	// Creates and returns a TreeNode.
	TreeNode addChild(String childName)
	{

	}
	
	
	String getName()
	{
		return name;
	}
	
	
	TreeSet<TreeNode> getChildren()
	{
		return children;
	}
	
	
	TreeNode getParent()
	{
		return parent;
	}
	
	
	// The root has depth zero. All its children have depth 1. All their
	// children have depth 2. Etc.
	int getDepth()
	{

	}
	
	
	// Call Rank.values() to get an array of Ranks, in the order they appear in Rank.java.
	// Assume this method will never be called on the root node. Any child of the root has
	// rank = Rank.KINGDOM, and so on.
	Rank getRank()
	{
	

	}
	
	
	// If this node has a child node with the specified name, returns that
	// child node. Otherwise returns null;
	TreeNode getChildWithName(String childName)
	{


	}
	
	
	// Return the hashCode of the name variable.
	public int hashCode()
	{

	}
	
	
	// Just compare this node's name to that node's name.
	public int compareTo(TreeNode that)
	{
		
	}
	
	
	// Be compatible and simple.
	public boolean equals(Object x)
	{
	
	}
	
	
	public static void main(String[] args)
	{
		System.out.println("Will test TreeNode");
		TreeNode n1 = new TreeNode("Darth");
		n1.addChild("Leia");
		TreeNode n2 = n1.getChildWithName("Leia");
		assert n2 != null;
		assert n2.name.equals("Leia");
		assert n2.getParent() == n1;
		assert n1.getDepth() == 0;
		assert n2.getDepth() == 1;
		System.out.println("All ok");
	}
}
