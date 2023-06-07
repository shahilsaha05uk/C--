#include "LinkedList.h"

/*

RULE:

	1. Create a new node 'n'
	2. Setup the new node:
			last node would be the current target of the list
	3. traverse to the next node

*/


LinkedList::LinkedList()
{
	Node* initialNodeReference = nullptr;
	Node* list = nullptr;

	for (auto d : dataArr)
	{
		Node* node = CreateNode(d);

		if (initialNodeReference == nullptr) 
		{
			list = node;
			initialNodeReference = list;

			continue;
		}

		node->lastNode = list;

		list->nextNode = node;
		list = list->nextNode;

	}

	Traverse(initialNodeReference);
}

LinkedList::~LinkedList()
{
}

Node* LinkedList::CreateNode(int data)
{
	return new Node(data);
}

void LinkedList::Traverse(Node* initialNodeReference)
{
	Node* ptrNode = initialNodeReference;
	int count = 0;

	while (ptrNode != nullptr)
	{

		int lastData = (ptrNode->lastNode != nullptr) ? ptrNode->lastNode->data : -1;
		int currentData = (ptrNode != nullptr) ? ptrNode->data : -1;
		int nextData = (ptrNode->nextNode != nullptr) ? ptrNode->nextNode->data : -1;

		printf("Value at last node: %d, current node: %d, next node: %d \n", lastData, currentData, nextData);
		ptrNode = ptrNode->nextNode;

		count++;
	}

}
