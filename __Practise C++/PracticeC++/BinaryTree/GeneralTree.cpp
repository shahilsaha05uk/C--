#include "GeneralTree.h"



void GeneralTree::AddLeaf(int data)
{
	AddLeaf_Private(data, *root);
}

void GeneralTree::PrintNodes()
{
}

TreeNode* GeneralTree::CreateLeaf_Private(int data)
{
	return new TreeNode(data);
}

void GeneralTree::AddLeaf_Private(int data, TreeNode& nPtr)
{
	if (root == nullptr)
	{
		root = CreateLeaf_Private(data);
	}
	else
	{
		nPtr.children->push_back(CreateLeaf_Private(data));
	}
}

void GeneralTree::PrintNodes_Private()
{
}

