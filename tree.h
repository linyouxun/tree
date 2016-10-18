#ifndef _TREE_
#define _TREE_

class Tree
{
	public:
		Tree(int size,int *pRoot);
		~Tree();
		int *searchNode(int index);
		bool addNode(int nodeIndex,int direction,int* pNode);
		bool deleteNode(int nodeIndex,int* pNode);
		void treeTraverse();
	private:
		int *m_pTree;
		int m_iSize;
};


#endif