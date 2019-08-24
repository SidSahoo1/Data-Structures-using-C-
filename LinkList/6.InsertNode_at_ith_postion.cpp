#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

/* We are adding a new tail ponter which will point to the last node through this we will be able minimize the time 
complexity for the program. We won't be traversing again and again to link the last node with the newNode*/
Node * TakeInputBetter(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *newNode =new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail= tail->next;
        }
        cin>>data;
    }
  return head;
}

void print(Node *head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node * InsertNode_at_ith_postion(Node *head, int i, int data){
    Node * newNode = new Node(data);
    int count=0;
    Node * temp = head;
    if(i==0){
        newNode->next = head;
        head = newNode;
        return head; 
    }
    while(temp!=NULL && count< i-1 ){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

int main() {
   Node *head =TakeInputBetter();
   print(head);
   InsertNode_at_ith_postion(head,0,99);
   print(head);
}
