// series2_method1.cpp
// Sum of first n terms of the series, S=1-2+3-4+5...

#include<iostream>

using namespace std;

int main()
{
    int i, j=1, n, s=0;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;
    for(i=0; i<=n; i++)
    {
        j=j*(-1);
        s=s+i*j;
    }
    cout<<"Sum of the first "<<n<<" terms of the series is "<<s<<endl;
    return 0;
}