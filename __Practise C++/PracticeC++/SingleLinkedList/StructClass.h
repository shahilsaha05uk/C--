#include <iostream>
#include <vector>

using namespace std;

struct SingleNode
{
    int data;
    SingleNode* node;

    SingleNode(int val)
    {
        data = val;
        node = nullptr;
    }
};

struct Node
{
    Node* lastNode;
    int data;
    Node* nextNode;

    Node(int data)
    {
        this->data = data;

        lastNode = nullptr;
        nextNode = nullptr;
    }

};

