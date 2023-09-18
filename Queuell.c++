#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() {
        data = 0;
        next = NULL;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;

    Queue() {
        front = rear = NULL;
    }

    bool isempty() {
        return (front == NULL && rear == NULL);
    }

    void Enqueue(int item) {
        Node* newnode = new Node();
        newnode->data = item; // تغيير إشارة السالب
        if (isempty()) {
            front = newnode;
            rear = newnode;
        } else {
            rear->next = newnode;
            rear = newnode;
        }
    }

    void display() {
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " "; // إضافة مساحة بين العناصر
            temp = temp->next;
        }
        cout << endl;
    }
   int dequeue() {
    int x = 0;
    if (isempty()) {
        cout << "the queue is empty";
    } else if (front == rear) {
        x = front->data;
        delete front;
        front = rear = NULL;
    } else {
        Node* delptr = front;
        front = front->next;
        x = delptr->data;
        delete delptr;
    }
    return x; // يجب أن تكون هنا بدلاً من return x; delete delptr;
}
int getfront (){
   return front ->data;


}
};

int main() {
    int item;
    Queue x; // تغيير كيفية إنشاء الكائن
  
    for (int i = 1; i <= 3; i++) {
        cout << "enter item to enqueue" << endl;
        cin >> item;
        x.Enqueue(item);
    }

    x.display();
    cout <<endl;
   cout << x.getfront();
    cout <<endl;
   cout << x.dequeue();
    cout <<endl;
    x.display();
    cout << endl;
   cout << x.dequeue();
   cout <<endl;
    x.display();
    cout <<endl;


    return 0;
}
