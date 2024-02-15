// num_of_digit.cpp
// program to print the number of digits of a number

#include<iostream>

using namespace std;

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

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Number of digit is "<<num_of_digit(num);
    return 0;
}