// print_all_prime_factors.cpp
// count and print all prime factors using function in c++

#include<iostream>

using namespace std;

int prime(int n, int i=2)
{
    for(    ; i<n; i++)
    {
        if(n%i==0)
            break;
        else
            continue;
    }
    if(n==i)
        return 1;
    else
        return 0;
}

void prime_factors(int n, int count=0)
{
    for(int i=2; i<=n; i++)
    {
        if((n%i==0)&&(prime(i)))
        {
            cout<<i<<endl;
            count++;
        }
    }
    cout<<"There are "<<count<<" prime factors of "<<n<<endl;
}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"The prime factors of "<<num <<" are: "<<endl;
    prime_factors(num);
    return 0;
}