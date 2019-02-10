#include<iostream>
using namespace std;

int stack[5],n=5,top=0;

void push(int val) {
   if(top>=n){
    cout<<"stack overflow"<<endl;
    }
    else{
     top++;
     stack[top]=val;
    }
  }

void pop() {
   if(top<=0){
     cout<<"stack underflow"<<endl;
    }
    else{
      top--;
    }
 }

void display() {
    int i;
   if (top>=0) {
    cout<<"stack elements are";
    for(i=0;i<=5;i++){
     cout<<stack[i]<<",";
     }
    cout<<endl;
    }
   else {
   cout<<"stack is empty";
  }
 }

int main()  {
  push(5);
  push(10);
  push(15);
  push(20);
  push(25);
  display();
  pop();
  pop();
  display();

 return 0;
 }
