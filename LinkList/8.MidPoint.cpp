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

void MidPoint(Node *head){
    Node * slow = head;
    Node * fast = head->next;
    if(head!=NULL){
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next-> next;
        }
        cout<<"Mid point :"<<slow->data<<endl;
    }
}
int main() {
   Node *head =TakeInputBetter();
   print(head);
   MidPoint(head);
}