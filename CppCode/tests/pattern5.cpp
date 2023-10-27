// pattern5.cpp
// inverted pyramid pattern of stars

#include<iostream>

using namespace std;

int main()
{
    int n, i, j;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for ( j = 0; j <= n-i; j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}