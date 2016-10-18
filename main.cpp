
#include <iostream>
#include "tree.h"
using namespace std;

int main()
{
	int root = 2;
	Tree *tree = new Tree(10,&root);
	int fNode = 10;
	tree -> addNode(0,2,&fNode);
	tree -> treeTraverse();
	delete tree;
	return 0;
}



