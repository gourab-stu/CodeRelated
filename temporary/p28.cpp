#include<iostream>

using namespace std;

class circle
{
    int l, b, area;

public:
    void input()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the bredth: ";
        cin>>b;
    }
    void output()
    {
        area=l*b;
        cout<<"The area of the rectangle is: "<<area;
    }
};

int main()
{
    circle ob;
    ob.input();
    ob.output();
    return 0;
}