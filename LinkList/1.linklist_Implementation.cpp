//Implementation of LinkList
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

int main() {

   //Statically creation of three separate nodes
   Node n1(10);
   Node n2(20);
   Node n3(30);
   //head pointer pointing to the very first node
   Node *head=&n1;
   //Linking these three nodes by storing address of the next node in the refrence next part of the node 
    n1.next=&n2;
    n2.next=&n3;
    //printing the linklist using head
    cout<<head->data<<"->"<<head->next->data<<"->"<<head->next->next->data<<endl;
    //printing the linklist without using head
    cout<<n1.data<<"->"<<n2.data<<"->"<<n3.data<<endl;

}
