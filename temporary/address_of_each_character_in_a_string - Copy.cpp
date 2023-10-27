// address_of_each_character_in_a_string.cpp
// program to print the address of each characters in a string

#include<iostream>
#include<string.h>

using namespace std;

class string_op
{
private:
    char str[100];

public:
    string_op()
    {
        cout<<"Enter a string: ";
        gets(str);
    }
    void print_address()
    {
        for(int i=0; i<strlen(str); i++)
        {
            cout<<str[i]<<endl;
        }
    }
};

int main()
{
    string_op ob;
    ob.print_address();
    return 0;
}