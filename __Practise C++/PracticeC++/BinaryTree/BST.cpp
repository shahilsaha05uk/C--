#include "BST.h"

BST::BST()
{
}

SingleNode* BST::CreateLeaf(int data)
{
    return new SingleNode(data);
}

void BST::AddLeaf(int data)
{
    AddLeaf_Private(data, root);
}

void BST::InorderTraversal()
{
	return InorderTraversal_Private(root);
}

#pragma region Private Methods

void BST::AddLeaf_Private(int data, SingleNode* nodePtr)
{
	/* 
		if the root is not pointing to anything... means that the root is empty
		That also means that you can create a leaf in the root
	*/
	if (root == nullptr)
	{
		root = CreateLeaf(data);
	}
	else if (data < nodePtr->data)	// if the new data is less than the data on the current node
	{
		//Move to the left

		if (nodePtr->left != nullptr)
		{
			AddLeaf_Private(data, nodePtr->left);
		}
		else
		{
			nodePtr->left = CreateLeaf(data);
		}
	}
	else if (data > nodePtr->data)	// if the new data is greater than the data on the current node
	{
		//Move to the right

		if (nodePtr->right != nullptr)
		{
			AddLeaf_Private(data, nodePtr->right);
		}
		else
		{
			nodePtr->right = CreateLeaf(data);
		}
	}
	else
	{
		cout << "The key: " << data << " has already been added to the tree" << endl;
	}
}

void BST::InorderTraversal_Private(SingleNode* nodePtr)
{
	if (nodePtr == nullptr)
	{
		cout << "Tree is empty" << endl;
		return;
	}


	if (nodePtr->left != nullptr)
	{
		InorderTraversal_Private(nodePtr->left);

		cout << "End of the left Chain" << endl;
	}

	cout << nodePtr->data << ", ";
	
	if (nodePtr->right != nullptr)
	{
		InorderTraversal_Private(nodePtr->right);
		cout << "End of the right Chain" << endl;
	}
}

#pragma endregion
