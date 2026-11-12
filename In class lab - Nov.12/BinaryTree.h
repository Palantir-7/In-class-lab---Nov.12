//Elizabeth Fanton 11/12/2026 in class lab
#pragma once

using namespace std;

#ifndef INC_2436_FALL2026_BINARYTREE_H
#define INC_2436_FALL2026_BINARYTREE_H

#include <memory>

class Node
{
	char data = '*';
	unique_ptr<Node> pleft;
	unique_ptr<Node> pright;		//binary tree = 3 nodes, root node: uptop

	public:
		Node();
		Node(char data);

		friend class BinaryTree; //gives BinaryTree access to the three private member variables.
};

class BinaryTree
{
	unique_ptr<Node> pRoot;

public:
	BinaryTree();
	BinaryTree(char dataInTheRoot);

	void addData(char newData) const;

	void print(Node* pCurrent) const;

	Node* getRoot() const;
	
};