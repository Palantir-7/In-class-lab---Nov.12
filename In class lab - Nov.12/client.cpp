#include"BinaryTree.h"

int main()
{
	BinaryTree binaryTree('a');
	binaryTree.addData('b');
	binaryTree.addData('c');
	binaryTree.addData('d');
	binaryTree.addData('e');

	Node* root = binaryTree.getRoot();

	binaryTree.print();

	//binaryTree.depthFirstTraverse();
}