// SingleLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList()
{
    arr1 = { 1,5,21,10 };

    SingleNode* initialNodeReference = AddingNodesWithLoop();

    TraverseThroughNode(initialNodeReference);
}

SingleLinkedList::~SingleLinkedList()
{
}

SingleNode* SingleLinkedList::CreateNode(int data)
{
    return new SingleNode(data);
}

// Traversing through each node in single Linked List
void SingleLinkedList::TraverseThroughNode(SingleNode* headNode)
{

    SingleNode* ptrNode = headNode;
    int count = 0;
    while (ptrNode != nullptr)
    {
        printf("Value at %d is: %d \n", count, ptrNode->data);
        count++;
        ptrNode = ptrNode->node;
    }

}

// Method 1:
void SingleLinkedList::ManualAddingNodes()
{
    SingleNode* head = CreateNode(1);
    head->node = CreateNode(5);
    head->node->node = CreateNode(2);
    head->node->node->node = CreateNode(10);
    TraverseThroughNode(head);

}

// Method 2:
SingleNode* SingleLinkedList::AddingNodesWithLoop()
{
    SingleNode* initialNodeReference = nullptr;
    SingleNode* list = nullptr;

    for (auto i : arr1)
    {
        SingleNode* newNode = CreateNode(i);

        if (initialNodeReference == nullptr)
        {
            list = newNode;
            initialNodeReference = list;

            continue;
        }

        list->node = newNode;
        list = list->node;
    }

    return initialNodeReference;
}
