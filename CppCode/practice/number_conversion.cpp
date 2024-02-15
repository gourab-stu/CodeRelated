// number_conversion.cpp
// program to perform various actions with a menu driven options

#include<iostream>

using namespace std;

class number_conversion
{
private:
    long int number;
    int base1, base2;

public:
    number_conversion()
    {
        cout<<"Enter the base of the input number system: ";
        cin>>base1;
        cout<<"Enter the number: ";
        cin>>number;
    }
    
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
    
    void menu()
    {
        int choice;
        cout<<"\t********MENU********"<<endl;
        cout<<"\t1. Conversion"<<endl;
        cout<<"\t2. Complement"<<endl;
        cout<<"Enter the choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                conversion();
                break;

            case 2:
                complement();
                break;

            default:
                cout<<"***INVALID INPUT***"<<endl;
        }
    }
    
    void conversion(int n, int b1, int b2)
    {
        int i=1, rev=0, r=0;
        if(b1!=b2)
        {
            if((n>10)&&(base1!=10)) // this statement converts the given number to decimal
            {
                while(n>0)
                {
                    r=n%10;
                    rev=rev+i*r;
                    n=n/10;
                    i=i*base1;
                }
                n=rev;
                rev=0;
                i=1;
            }
            if(base2!=10) // this statement converts the decimal number to given number system
            {
                while(n>0)
                {
                    r=n%base2;
                    rev=rev+i*r;
                    n=n/base2;
                    i=i*10;
                }
                n=rev;
            }
        }
    }

    void conversion()
    {
        int i=1, rev=0, r=0;
        cout<<"Enter the base of the output number system: ";
        cin>>base2;
        int n=number;
        if(base1!=base2)
        {
            if((n>10)&&(base1!=10)) // this statement converts the given number to decimal
            {
                while(n>0)
                {
                    r=n%10;
                    rev=rev+i*r;
                    n=n/10;
                    i=i*base1;
                }
                n=rev;
                rev=0;
                i=1;
            }
            if(base2!=10) // this statement converts the decimal number to given number system
            {
                while(n>0)
                {
                    r=n%base2;
                    rev=rev+i*r;
                    n=n/base2;
                    i=i*10;
                }
                n=rev;
            }
        }
        else
            cout<<"Input and Output base are same"<<endl;
        cout<<"("<<number<<")"<<base1<<" = "<<"("<<n<<")"<<base2<<endl;
    }
    
    void complement()
    {
        cout<<base1-1<<"'s complement of "<<number<<" is "<<comp(base1, number)<<endl;
        cout<<base1<<"'s complement of "<<number<<" is "<<comp(base1, number)+1<<endl;
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
};

int main()
{
    number_conversion ob;
    ob.menu();
    return 0;
}