// Printing the linklist
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data=data;
            next=NULL;
        }
};

void print1(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
/*By using head pointer directly we gonna lose the head pointer as it will end up get null in the end.
If we ever want to traverse again in the list we won't be having the addresss of the first node in the head pointer.
*/
}

void print2(Node *head){
//temp pointer is intialised with head so that while traversing through the list, the head pointer doesn't get altered, like in the print1().
    Node *temp = head; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node *head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    //print1() for printing the linklist using a head pointer.
    print1(head);
    //print2() for printing the linklist using a temp pointer so that head pointer doesn't get altered.
    print2(head);
}
