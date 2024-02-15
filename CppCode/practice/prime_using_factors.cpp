// prime_using_factors.cpp
// checking if a given number is prime or not in C++

#include<iostream>

using namespace std;

void factors(int n, int i=1, int count=0)
{
    for(    ; i<=n; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
        cout<<n<<" is a prime number"<<endl;
    else
        cout<<n<<" is not a prime number"<<endl;
}

int main()
{
    int num, i;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    factors(num);
    return 0;
}