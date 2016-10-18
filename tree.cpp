#include <iostream>
#include "tree.h"
using namespace std;

Tree::Tree(int size,int *pRoot)
{
	m_iSize = size;
	m_pTree = new int[size];
	for (int i = 0; i < size; ++i)
	{
		m_pTree[i] = 0;
	}
	m_pTree[0] = *pRoot;
}
Tree::~Tree()
{
	delete []m_pTree;
}
int *Tree::searchNode(int index)
{
	if(index < 0 || index > m_iSize){
		return NULL;
	}
	if(m_pTree[index] == 0){
		return NULL;
	}
	return &m_pTree[index];
}
bool Tree::addNode(int nodeIndex,int direction,int* pNode)
{
	if(nodeIndex < 0 || nodeIndex > m_iSize){
		return false;
	}
	if(m_pTree[nodeIndex] == 0){
		return false;
	}
	m_pTree[nodeIndex*2+direction] = *pNode;
	return true;
}
bool Tree::deleteNode(int nodeIndex,int* pNode)
{
	if(nodeIndex < 0 || nodeIndex > m_iSize){
		return false;
	}
	if(m_pTree[nodeIndex] == 0){
		return false;
	}
	*pNode = m_pTree[nodeIndex];
	m_pTree[nodeIndex] = 0;

}
void Tree::treeTraverse()
{
	for (int i = 0; i < m_iSize; ++i)
	{	
		cout << m_pTree[i] << " ";
	}
	cout << endl;
}



