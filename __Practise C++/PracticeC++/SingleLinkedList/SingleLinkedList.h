#include "StructClass.h"

/*

POINTS TO REMEMBER:

    THE HEAD NODE *ONLY* CONTAINS THE ADDRESS OF THE FIRST NODE IN THE LINKED LIST

*/


using namespace std;



class SingleLinkedList
{
private:

    vector<int> arr1;

public:

    SingleLinkedList();
    ~SingleLinkedList();

	SingleNode* CreateNode(int data);
	void TraverseThroughNode(SingleNode* headNode);

	void ManualAddingNodes();
	SingleNode* AddingNodesWithLoop();



};

