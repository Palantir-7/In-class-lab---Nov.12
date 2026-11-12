#include "BinaryTree.h"
#include <iostream>

Node::Node() = default;

Node::Node(char data)
	:
	data(data), pleft(nullptr), pright(nullptr)
{

}

BinaryTree::BinaryTree() = default;
//{
//	pRoot = nullptr;
//}

BinaryTree::BinaryTree(char dataInTheRoot)
{
	pRoot = make_unique<Node>(dataInTheRoot);
}

void BinaryTree::addData(char newData) const
{
	unique_ptr<Node> pNew = make_unique<Node>(newData);

	if (pRoot->pleft == nullptr)
	{
		pRoot->pleft = move(pNew);
	}
	else if (pRoot->pright == nullptr)
	{
		pRoot->pright = move(pNew);
	}
	//second level
	else if
		(pRoot->pleft->pleft == nullptr)
	{
		pRoot->pleft->pleft = move(pNew);
	}
	else if
		(pRoot->pleft->pright == nullptr)
	{
		pRoot->pleft->pright = move(pNew);
	}
}

void BinaryTree::print(Node* pCurrent) const
{
	//base case (termination) of recursion
	if(pCurrent == nullptr)
	{
		return;
	}
	cout << pCurrent->data << endl;
	print(pCurrent->pleft.get());//recurse
	print(pCurrent->pright.get());

}

Node* BinaryTree::getRoot() const
{
	return pRoot.get();
}
