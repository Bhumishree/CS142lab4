#include<iostream>
using namespace std;

class Node{
  public:
   int data;
   Node*next;
Node () {
  next=NULL;
  }
};

class stackll {
 public:
   Node*top;
   
  stackll () {
   top=NULL;
   
}
void push(int val) {
   Node*temp=new Node;
   temp->data=val;
   temp->next=top;
   top=temp;
  }

void pop() {
  if(top==NULL){
   cout<<"stack underflow"<<endl;
  }
  else{
    top=top->next;
   }
  }

bool isEmpty() {
   if(top==NULL){
    cout<<"stack is empty";
  }
   else{
  cout<<"stack is not empty"<<endl;
  }
 }

int Top() {
  cout<<top->data<<endl;
 }

int size() {
 int i=1;
 Node*current=top;
 while(current!=NULL){
     current=current->next;
     i++;
  }
 return i;
 }

void display() {
  Node*current=top;
  while(current!=NULL){
   cout<<current->data<<"->";
   current=current->next;
   }
  cout<<endl;
}

};

int main() {
  stackll l1;
    
   l1.push(1);
   l1.push(2);
   l1.push(3);
   l1.push(4);
   l1.push(5);
   l1.display();
   l1.pop();
   l1.pop();
   l1.pop();
   l1.display();
   l1.size();
   l1.Top();
   l1.isEmpty();

  return 0;
}
