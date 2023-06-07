#include "StructClass.h"


#pragma once
class SingleLinkedListRe
{
private:

	vector<int> dataArr = { 9,5,2,4,3,7,8 };


public:

	SingleLinkedListRe();
	~SingleLinkedListRe();

	SingleNode* CreateNode(int data);

	void Traverse(SingleNode* initialNodeReference);
};

