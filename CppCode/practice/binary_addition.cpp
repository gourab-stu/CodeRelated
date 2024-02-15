// binary_addition.cpp
// program to find the addition of two binary numbers

#include<iostream>

using namespace std;

class binary
{
private:
    long int number1, number2;
    void chk_bin(int n)
    {
        int r=0;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            if(r>1)
            {
                cout<<"Number is not in binary"<<endl;
                exit(0);
            }
        }
    }

public:
    binary(long int a, long int b)
    {
        chk_bin(a);
        chk_bin(b);
        number1=a;
        number2=b;
    }
    
    int bin2dec(long int n)
    {
        int i=1, rev=0, r;
        while(n>0)
        {
            r=n%10;
            rev=rev+i*r;
            n=n/10;
            i=i*2;
        }
        return rev;
    }

    int dec2bin(long int n)
    {
        int i=1, rev=0, r;
        while(n>0)
        {
            r=n%2;
            rev=rev+i*r;
            n=n/2;
            i=i*10;
        }
        return rev;
    }
    int add()
    {
        return dec2bin(bin2dec(number1)+bin2dec(number2));
    }
};

int main()
{
    long int num1, num2;
    cout<<"Enter the 1st binary number: ";
    cin>>num1;
    cout<<"Enter the 2nd binary number: ";
    cin>>num2;
    binary ob(num1, num2);
    cout<<"("<<num1<<")2 + ("<<num2<<")2 = ("<<ob.add()<<")2"<<endl;
    return 0;
}