#include <iostream>
using namespace std;

// Creating a node using class
class Node{
    public:
    int data;
    Node *next;
    Node (int data){
        this->data=data;
        next=NULL;
    }
};

int main() {
    //Creation of Node n1 dynamically
    Node *n1 = new Node(10);
    //head which points to very first node i.e n1
    Node *head = n1;
    //Creation of Node n2,n3,n4 dynamically
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    //Linking these nodes with the next node to form a linklist
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    //printing of linklist using pointer through data part
    cout<< n1->data <<"->"<< n2->data <<"->"<< n3->data <<"->"<< n4->data <<endl;
    //printing of linklist using head
    cout<< head->data <<"->"<< head->next->data <<"->"<< head->next->next->data <<"->"<< head->next->next->next->data <<endl;

    //Address of the nodes
    cout<<&n1<<" "<<&n2<<" "<<&n3<<" "<<&n4<<" "<<endl;
    //size of the node
    cout<<sizeof(n1)<<endl;

}
