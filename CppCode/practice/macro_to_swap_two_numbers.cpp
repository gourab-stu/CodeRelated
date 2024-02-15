// macro_to_swap_two_numbers.cpp
// macro to swap two numbers without using 3rd variable in c++
 
#include<iostream>
#define swap(a, b)  a=a+b;b=a-b;a=a-b;

using namespace std;

int main()
{
    int x = 10, y = 20;
    cout<<"Values before swap x="<<x<<", y="<<y<<endl;
    swap(x, y);
    cout<<"Values after swap x="<<x<<", y="<<y<<endl;
    return 0;
}