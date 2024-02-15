// pattern11.cpp
// palindrome pyramid pattern of numbers

#include<iostream>

using namespace std;

int main()
{
    int n, i, j, k1, k2;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            cout<<" ";
        for(k1=1; k1<i; k1++)
            cout<<k1;
        for(k2=k1; k2>=1; k2--)
            cout<<k2;
        cout<<endl;
    }
    return 0;
}