// function_calling_methods.cpp
// swap of two numbers using various function calling methods 

#include<iostream>

using namespace std;

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
} // this will not swap x and y

void swapAddress(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
} // this will swap x and y using address as formal argument

void swapReferenceVar(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
} // this will swap x and y using address as formal argument

int main()
{
    int x=4, y=5;
    cout<<"Before swap x = "<<x<<" and y = "<<y<<endl;
    swap(x, y); // this is swap using call by value works in both c and c++
    cout<<"After swap using call by value"<<endl;
    cout<<"x = "<<x<<" and y = "<<y<<endl<<endl;

    cout<< "Before swap x = " << x << " and y = " << y << endl;
    swapAddress(&x, &y); // this is swap using call by address works both in c and c++
    cout<<"After swap using call by address" << endl;
    cout<<"x = "<<x<<" and y = "<<y<<endl <<endl;

    cout<<"Before swap x = "<<x<<" and y = "<<y<<endl;
    swapReferenceVar(x, y); // this is swap using call by reference works specially in c++
    cout<<"After swap using call by reference"<<endl;
    cout<<"x = "<<x<<" and y = "<<y<<endl<<endl;

    return 0;
}