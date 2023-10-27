// sum_and_product_of_digits.cpp
// Sum of digits and product of digits

#include<iostream>

using namespace std;

int main()
{
    int n, r, sum=0, prod=1;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    cout<<"Sum of digits is "<<sum<<endl;
    cout<<"Product of digits is "<<prod<<endl;
    return 0;
}