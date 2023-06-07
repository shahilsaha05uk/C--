#include <iostream>
#include <vector>

using namespace std;

/*
Binary Search Tree:

1. Basically, it compares the new data with the data on the current node the pointer is pointing to.
	
	if the (new data < existing data)
	{
		move to left
	}
	else
	{
		move to right
	}

*/
struct SingleNode
{
	int data;
	SingleNode* left;
	SingleNode* right;

	vector<SingleNode>* leaves;

	SingleNode(int val)
	{
		data = val;
		left = nullptr;
		right = nullptr;

		leaves = new vector<SingleNode>();
	}
};


class BST
{
public:

	BST();

	SingleNode* CreateLeaf(int data);
	
	void AddLeaf(int data);

	void InorderTraversal();


private:

	// Variables
	SingleNode* root;

	void AddLeaf_Private(int data, SingleNode* nodePtr = nullptr);
	void InorderTraversal_Private(SingleNode* nodePtr = nullptr);



};

