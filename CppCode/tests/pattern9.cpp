// pattern9.cpp
// continuous number pyramid pattern of numbers

#include<iostream>

using namespace std;

int main()
{
    int n, i, j, k=1;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++, k++)
            cout<<k<<"\t";
        cout<<endl;
    }
    return 0;
}