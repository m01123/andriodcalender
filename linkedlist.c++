#include <iostream>
using namespace std;

class Node {
public:
    int data;

    Node* next;
};

class Linkedlist {
public:
    Node* head;
    Linkedlist() {
        head = NULL;
    }
    bool isempty() {
        return head == NULL;
    }
    void insertFirst(int newitem) {
        Node* newnode = new Node;
        newnode->data = newitem;
        if (isempty()) {
            newnode->next = NULL;
            head = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }
    void display() {
        Node* temp = head;
        int count =0;
        while (temp != NULL) {
            cout << temp->data << " ";
            
            temp = temp->next;
            count ++;
        }
        
        cout << endl;
        cout <<"count ="<<count;
    }
    bool is_found (int item){
  Node* temp = head;
      bool found=false;
        while (temp != NULL) {
        if (temp->data==item){
            found=true;
        }
            
            temp = temp->next;
       
        }
        return found;
    }
    void insertbefore(int item,int newitem){
        if (is_found(item)){
           Node* newnode = new Node;
        newnode->data = newitem;
        Node* temp=head;
        while (temp!=NULL&&temp->next->data!=item){
            temp=temp->next;
        }
newnode->next=temp->next;
temp->next=newnode;
    }
    else {
        cout <<"item not found";
    }
}
void append(int item){
    if (isempty()){
insertFirst(item);
    }else {
    Node* newnode = new Node;
        newnode->data = item;
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;


        }
        newnode=temp->next;
newnode->next=NULL;


}}
void Delete(int item){
    Node* delptr=head;
if (isempty()){
    cout <<"list is empty";
}
if (head->data==item){

    head=head->next;
    delete delptr;
}else {

Node* prevoius =NULL;
delptr=head;
while (delptr->data!=item){
prevoius =delptr;
delptr=delptr->next;
}
prevoius->next=delptr->next;
delete delptr;
}


}


};

int main() {
    Linkedlist myList;
    int x,y;
    cin >> x;
    for (int i=0;i<x;i++){
        cin >> y;
       myList.insertFirst(y);
    }
    myList.display();
    cout <<endl;
myList.Delete(4);
myList.display();
    return 0;
}