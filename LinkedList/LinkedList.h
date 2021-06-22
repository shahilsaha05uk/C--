#pragma once

#include "structs.h"
#include <iostream>
#include <iomanip>

using namespace std;

class LinkedList
{
private:
	ListNode* head = nullptr;
public:
	LinkedList();
	~LinkedList();

	ListNode* MakeNode(ListNode** head, int d);
	ListNode* InsertFirst(ListNode** head, int d);
	void InsertAfter(ListNode* lastnode, int d);
	void DeleteList(ListNode** node);
	void DeleteAfter(ListNode* node);
	ListNode* GetNode(ListNode* node, int pos);
	ListNode* Find(ListNode* node, int val);
	void PrintList(ListNode* node);

	ListNode* PosNodeDelete(ListNode* node, int pos);
	void PrintListBackwards(ListNode* node);
	void PrintListBackwards();
};

