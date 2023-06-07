#include "SingleLinkedListRe.h"

SingleLinkedListRe::SingleLinkedListRe()
{
	SingleNode* initialNodeReference = nullptr;
	SingleNode* list = nullptr;

	for (auto d : dataArr)
	{
		SingleNode* newNode = CreateNode(d);

		if (initialNodeReference == nullptr)
		{
			list = newNode;
			initialNodeReference = list;

			continue;
		}

		list->node = newNode;
		list = list->node;
	}

	Traverse(initialNodeReference);
}

SingleLinkedListRe::~SingleLinkedListRe()
{
}

SingleNode* SingleLinkedListRe::CreateNode(int data)
{
	return new SingleNode(data);
}

void SingleLinkedListRe::Traverse(SingleNode* initialNodeReference)
{
	SingleNode* pointTo = initialNodeReference;
	int count = 0;

	while (pointTo != nullptr)
	{
		printf("Data at %d node: %d \n", count, pointTo->data);

		pointTo = pointTo->node;
	}

}
