#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList* lists = new LinkedList();

	ListNode* head = nullptr;

	lists->MakeNode(&head, 10);
	lists->InsertAfter(head, 15);
	lists->InsertAfter(head, 40);
	lists->PrintList(head);
	lists->PrintListBackwards(head);


	//cout << "After deletion:"<<endl;
	//lists->PosNodeDelete(head, 0);
	//lists->DeleteAfter(head);
	//lists->PrintList(head);

	//lists->GetNode(head, 4);

	//lists->Find(head, 20);

	
}

