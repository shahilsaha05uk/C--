#include "LinkedList.h"


LinkedList::LinkedList()
{

}
LinkedList::~LinkedList()
{

}
ListNode* LinkedList::MakeNode(ListNode** head, int d)
{
	ListNode* newNode = new ListNode; //Creating a new node struct
	ListNode* last = *head; // last is a pointer to the head pointer

	//Assign data to the variables in the struct
	newNode->data = d; 
	newNode->next = nullptr;

	//-----------------------------------CREATE A NEW NODE IF THERE IS NO HEAD NODE/STARTING NODE---------------------------------

	// Check if the list contains a node, if not then create a head node as the starting node
	if (*head == nullptr) // if the address to the head node is null 
	{
		*head = newNode; // then the pointer head is equal to newNode which is a new ListNode
		return newNode; // return the struct as per the return type
	}

	//-------------------------TO ADD MORE NODES, GO THROUGH THE EXISTING NODES TO FIND THE LAST NODE AND ADD A NEW NODE-------------------------------

	// Now we loop through the nodes to find the final node so that we can add another node and returning the node
	while (last->next != nullptr) // so last is initially the address to the address of the head and now while the address is not nullptr,
	{
		last = last->next; // keep going through the nodes
	}
	last->next = newNode;
	return newNode;
}
void LinkedList::PrintListBackwards(ListNode* node)
{

	if (node != nullptr)
	{
		PrintListBackwards(node->next);
		cout  << "| " << node->data << " |-->";
	}

}


ListNode* LinkedList::InsertFirst(ListNode** head, int d)
{
	ListNode* newNode = new ListNode;
	newNode->data = d;
	newNode->next = *head;
	*head = newNode;

	return newNode;
}
void LinkedList::InsertAfter(ListNode* lastnode, int d)
{
	if (lastnode == nullptr)
	{
		cout << "Last node cannot be null" << endl;
	}

	ListNode* newNode = new ListNode;
	newNode->data = d;
	newNode->next = lastnode->next;
	lastnode->next = newNode;
}
void LinkedList::DeleteList(ListNode** node)
{
	ListNode* p_temp = *node;
	ListNode* next;

	while (p_temp != nullptr)
	{
		next = p_temp->next;
		delete p_temp;
		p_temp = next;
	}
	*node = nullptr;
}
void LinkedList::DeleteAfter(ListNode* node)
{
	ListNode* pTemp;
	if (node != nullptr && node->next != nullptr)
	{
		pTemp = node->next;
		node->next = pTemp->next;

		delete pTemp;
	}
}
ListNode* LinkedList::GetNode(ListNode* node, int pos)
{
	int count = 0;
	while (node!=nullptr)
	{
		if (count == pos)
		{
			cout << "Data stored at position" << endl;
			return node;
		}
		count++;
		node = node->next;
	}
	cout << "was not a valid position..." << endl;
	return nullptr;
}
ListNode* LinkedList::Find(ListNode* node, int val)
{
	node = node->next;
	while (node!=nullptr)
	{
		if (val == node->data)
		{
			cout << "Match found" << endl;
			return node;
		}
		node = node->next;
	}
	cout << "No match found" << endl;
	return nullptr;
}

ListNode* LinkedList::PosNodeDelete(ListNode* node, int pos)
{
	int count = 0;
	while (node != nullptr)
	{

		GetNode(node, pos);
	//if the position is found delete the node
		if (count == pos)
		{
			DeleteAfter(node);
			cout << "Position found" << endl;
			return node;
		}
		count++;
		node = node->next;
	}

	cout << "Position not found.." << endl;
	return nullptr;
}
void LinkedList::PrintList(ListNode* node)
{
	while (node != nullptr)
	{
		cout << setw(5) << "|  " << node->data << "|-->";

		node = node->next;
	}
	if (node == nullptr)
	{
		cout << "| NULL |" << endl;
	}
	cout << endl;
}

