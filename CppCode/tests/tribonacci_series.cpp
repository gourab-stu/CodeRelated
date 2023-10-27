// tribonacci_series.cpp
// tribonacci series upto n term

#include<iostream>

using namespace std;

int main()
{
    int n, i, a = 0, b = 0, c = 1, d;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Tribonacci series of "<<n<<" terms is:"<<endl;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(i=1; i<=n; i++)
    {
        d=a+b+c;
        cout<<d<<" ";
        a=b;
        b=c;
        c=d;
    }
    return 0;
}