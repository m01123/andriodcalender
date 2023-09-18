#include <iostream>
using namespace std;
class Node {
    public:

int data;
Node* next;
Node (){
    data=0;
    next=NULL;
}


};
class stack{
Node* top;

public :
stack(){top=NULL;};
bool isEmpty(){
  return top==NULL;
}
void push(int item){
     Node *newnode=new Node();
newnode->data=item;
if (isEmpty()){
   
newnode->next=NULL;
top=newnode;
}else {newnode->next=top;
top=newnode;

     
}

}
int pop()
{
    int value ;

    Node* delptr=top;
value =top->data;
top=top->next;

delete delptr;
return value;
}
void display(){
    Node* temp=top;
while (temp!=NULL){
cout <<temp->data<<" ";
temp=temp->next;   
cout <<endl;
 }

}

};

int main (){
    int item;
    stack s;
 for (int i=0;i<3;i++){
    cout <<"enter item to push"<<endl;
    cin >> item;

s.push(item);

 }
s.display();
cout << endl;
cout <<s.pop()<<"   was delted from stack\n";
s.display();
cout << endl;



}