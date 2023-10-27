// complement.cpp
// program to find the complement by the given number and radix of that number

#include<iostream>

using namespace std;

int pow(int base, int power)
{
    int m=1, n=base;
    while(power!=0)
    {
        m=m*n;
        power--;
    }
    return m;
}

int num_of_digit(int n)
{
    int s=0, r;
    while(n>0)
    {
        n=n/10;
        s++;
    }
    return s;
}

int comp(int r, int N)
{
    return (pow(r, num_of_digit(N))-1)-N;
}

int main()
{
    int number, base;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<base-1<<"'s complement of "<<number<<" is "<<comp(base, number)<<endl;
    cout<<base<<"'s complement of "<<number<<" is "<<comp(base, number)+1<<endl;
    return 0;
}