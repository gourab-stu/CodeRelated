// pattern7.cpp
// inverted triangle pattern of stars

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i-1; j++)
            cout<<" ";
        for(k=0; k<=n-i; k++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}