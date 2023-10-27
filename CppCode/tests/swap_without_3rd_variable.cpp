// swap_without_3rd_variable.cpp
// swap two numbers without using 3rd variable in c++

#include<iostream>

using namespace std;

int main()
{
    int a=10, b=20;
    cout<<"Values before swap a="<<a<<", b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Values after swap a="<<a<<", b="<<b<<endl;
    return 0;
}