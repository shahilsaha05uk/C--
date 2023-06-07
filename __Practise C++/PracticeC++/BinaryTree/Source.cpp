#include <iostream>
#include <vector>
#include "BST.h"
#include "GeneralTree.h"
#include <string>

using namespace std;



int main() 
{

	vector<int> array1 = { 1,2,3,20,4,5,6,50 };

	#pragma region BST
	
	//BST* bSearch = new BST();

	//// Adding leaves to the binary Tree
	//for (size_t i = 0; i < array1.size(); i++)
	//{
	//	bSearch->AddLeaf(array1[i]);
	//}

	//// Traversing through the nodes
	//bSearch->InorderTraversal();

#pragma endregion

#pragma region GeneralTree

	//GeneralTree* gt = new GeneralTree();

	//for (size_t i = 0; i < array1.size(); i++)
	//{
	//	gt->AddLeaf(array1[i]);
	//}

#pragma endregion

	string s;

	getline(std::cin, s);
	if (s.empty())
	{
		cout << "String is empty" << endl;
	}
	else
	{
		cout << "String is valid" << endl;
	}



	return 0;
}