#pragma once
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
	int data;

	vector<TreeNode*>* children;

	TreeNode(int val)
	{
		data = val;
		children = new vector<TreeNode*>();
	}
};

class GeneralTree
{
public:

	void AddLeaf(int data);
	void PrintNodes();

	TreeNode* root;

private:

	TreeNode* CreateLeaf_Private(int data);
	void AddLeaf_Private(int data, TreeNode& nPtr);

	void PrintNodes_Private();

};