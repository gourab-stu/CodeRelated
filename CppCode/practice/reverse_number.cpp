// reverse_number.cpp
// Reverse of a number in c++

#include<iostream>

using namespace std;

int main()
{
    int n, r, rev=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<"Reverse of the number is "<<rev<<endl;
    return 0;
}