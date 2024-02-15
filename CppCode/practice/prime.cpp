// prime.cpp
// checking if a given number is prime or not in C++

#include<iostream>

using namespace std;

int main()
{
    int n, i;
    cout<<"Enter an integer: "<<endl;
    cin>>n;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            break;
        else
            continue;
    }
    if(i==n)
        cout<<n<<" is a prime number"<<endl;
    else
        cout<<n<<" is not a prime number"<<endl;
    return 0;
}