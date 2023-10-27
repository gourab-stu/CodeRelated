// fibonacci_series.cpp
// fibonacci series upto n term

#include<iostream>

using namespace std;

int main()
{
    int n, i, a=0, b=1, c;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci series upto "<<n<<" terms is:"<<endl;
    cout<<a<<" "<<b<<" ";
    for(i=3; i<=n; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}