#include "StructClass.h"



#pragma once
class LinkedList
{
private:

	vector<int> dataArr = { 9,5,2,4,3,7,8 };


public:

	LinkedList();
	~LinkedList();

	Node* CreateNode(int data);

	void Traverse(Node* initialNodeReference);




};

