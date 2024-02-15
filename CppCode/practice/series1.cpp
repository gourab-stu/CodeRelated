// series1.cpp
// Sum of first n terms of the series, S=1+1/2+1/3+1/4+... in c++

#include<iostream>

using namespace std;

int main()
{
    int n;
    double i=1.0, s=0.0;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;
    while(i<=n)
    {
        s=s+1.0/i;
        i++;
    }
    cout<<"Sum of the first "<<n<<" terms of the series is "<<s<<endl;
    return 0;
}