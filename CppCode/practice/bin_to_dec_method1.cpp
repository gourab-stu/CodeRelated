// bin_to_dec_method1.cpp
// program to convert a binary number to its decimal equivalent

#include<iostream>

using namespace std;

class number_conversion
{
private:
    long int number;

public:
    number_conversion()
    {
        cout<<"Enter the number in binary: ";
        cin>>number;
    }
    void conversion()
    {
        int n=number, i=1, rev=0, r;
        while(n>0)
        {
            r=n%10;
            rev=rev+i*r;
            n=n/10;
            i=i*2;
        }
        cout<<"The decimal equivalent is: "<<rev<<endl;
    }
};

int main()
{
    number_conversion ob;
    ob.conversion();
    return 0;
}