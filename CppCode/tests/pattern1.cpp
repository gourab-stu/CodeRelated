// pattern1.cpp
// triangle pattern of stars

#include<iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            cout<<" ";
        for(k=1; k<=2*i-1; k++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}