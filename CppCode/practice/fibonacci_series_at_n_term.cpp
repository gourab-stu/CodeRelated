// fibonacci_series_at_n_term.cpp
// fibonacci series value n term using recursion

#include<iostream>

using namespace std;

int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int num;
    cout<<"Enter the term of fibonacci series: ";
    cin>>num;
    cout<<"Value at term "<<num<<" is "<<fibonacci(num);
    return 0;
}