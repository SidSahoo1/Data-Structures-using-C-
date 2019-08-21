//TakeInput
#include <iostream>
using namespace std;

//Creation of node
class Node{
    public:
    int data;
    Node * next;
     Node(int data){
         this->data=data;
         next=NULL;
     }

};

/*TakeInput() stores the data in the node and links them with each other 
and it return head pointer so that after this function any operation can be performed on this list.*/
Node * TakeInput1(){
//Taking the data input for very first node
    int data;
    cin>>data;
//Creating a head pointer which intially points to NULL
     Node * head = NULL;
//Intially just to learn we had taken a system while takes all the data except -1 just to terminate the list.
//Instead of -1 , we could have used 'y' or 'n' for new nodes.
    while(data!=-1){
/* We are creating new nodes dynamically so take even after the scope gets over the Nodes can still exist only the pointer losses its scope.
But till then we will link this nodes with each other result a linklist */    
    Node *newNode = new Node(data);
    if(head==NULL){
//Storing the head pointer with the address of the very first node only when head pointer is NUll intially.
        head = newNode;
    }else{
/*Linking the newNode with the existing previous node,We will traverse until we get a node having next as NULL, 
on finding the temp->next as NULL i.e node's->next as NULL we gonna link it with the newly created node i.e NewNode.*/
        Node * temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
    }
    cin>>data;
    }
//Returning the head
  return head;  
}

//printing the linklist
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    Node * head = TakeInput1();
    print(head);
}
