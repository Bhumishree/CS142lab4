#include<iostream>
using namespace std;
 
class Node {
   public:
  int data;
  Node*next;
  Node() {
   next=NULL;
  }
 };

class queuell {
  public:
  Node*front;
  Node*back;
 queuell() {
  front=NULL;
  back=NULL;
  }

void enque(int val) {
  Node*temp=new Node;
  temp->data=val;
  temp->next=front;
  front=temp;
  } 

void deque() {
  if(back!=NULL) {
   back=back->next;
 }
}

bool isEmpty () {
 if(front==NULL&&back==NULL){
   cout<<"empty"<<endl;
 }
 else {
  cout<<"not empty"<<endl;
 }
}

int Top() {
  cout<<front->data<<endl;
 }

int size() {
 int i=1;
 Node*current=front;
 while(current!=back){
   current=current->next;
    i++;
  }
 return i;
}

void display() {
 Node*current=front;
 while(current!=back){
  cout<<current->data<<"->";
  current=current->next;
 }
 cout<<endl;
}
};

int main() {
  queuell l1;
    l1.enque(5);
    l1.enque(10);
    l1.enque(15);
    l1.enque(20);
    l1.enque(25);
    l1.display();
    l1.deque();
    l1.deque();
    l1.deque();
    l1.display();
    l1.size();
    l1.Top();
    l1.isEmpty();

return 0;
}



