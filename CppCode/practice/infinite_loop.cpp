// infinite_loop.cpp
// example of an infinite loop

#include<iostream>

using namespace std;

int main()
{
    for(int i=0; 0<=1; i++)
    {
        cout<<"loop no "<<i<<endl;
    }
    return 0;
}