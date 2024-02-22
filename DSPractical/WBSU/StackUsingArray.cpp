#include <iostream>

int stack[100], n=100, top=-1;

void push(int val) {
   if(top>=n-1)
   std::cout<<"Stack Overflow"<<std::endl;
   else {
      top++;
      stack[top]=val;
   }
}

void pop() {
   if(top<=-1)
   std::cout<<"Stack Underflow"<<std::endl;
   else {
      std::cout<<"The popped element is "<< stack[top] <<std::endl;
      top--;
   }
}

void display() {
   if(top>=0) {
      std::cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
         std::cout<<stack[i]<<" ";
      std::cout<<std::endl;
   } else
   std::cout<<"Stack is empty";
}

int main() {
   int ch, val;
   std::cout<<"1) Push in stack"<<std::endl;
   std::cout<<"2) Pop from stack"<<std::endl;
   std::cout<<"3) Display stack"<<std::endl;
   std::cout<<"4) Exit"<<std::endl;
   do {
      std::cout<<"Enter choice: "<<std::endl;
      std::cin>>ch;
      switch(ch) {
         case 1: {
            std::cout<<"Enter value to be pushed:"<<std::endl;
            std::cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            std::cout<<"Exit"<<std::endl;
            break;
         }
         default: {
            std::cout<<"Invalid Choice"<<std::endl;
         }
      }
   }while(ch!=4);
   return 0;
}