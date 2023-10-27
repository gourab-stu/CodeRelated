// series2_method2.cpp
// Sum of first n terms of the series, S=1-2+3-4+5... another method with if-else

#include<iostream>

using namespace std;

int main()
{
    int i, n, s=0;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;
    for(i=0; i<=n; i++)
    {
        if(i%2==0)
            s=s-i; // since it will always be subtracted by even numbers
        else
            s=s+i; // since it will always be added by odd numbers
    }
    cout<<"Sum of the first "<<n<<" terms of the series is "<<s<<endl;
    return 0;
}