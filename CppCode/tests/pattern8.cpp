// pattern8.cpp
// number pyramid pattern of numbers

#include<iostream>

using namespace std;

int main()
{
    int n, i, j;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            cout<<i;
        cout<<endl;
    }
    return 0;
}