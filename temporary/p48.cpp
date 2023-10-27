#include<iostream>
#include<conio.h>
using namespace std;
class cl
{   int a;
public:
    cl()
    {   a=10;
        cout<<"Default constructor "<<a<<endl;
    }
    cl(int x)
    {   a=x;
        cout<<"Parameterized constructor "<<a<<endl;
    }
    cl(cl &ob)
    {   a=ob.a;
        cout<<"Copy constructor "<<a<<endl;
    }
    ~cl()
    {   cout<<"Destructor "<<a<<endl;
    }
};
int main()
{   clrscr();
    cl ob1, ob2(100);
    cl ob3=ob2; // called default copy constructor of system
    cout<<"Main Function "<<endl;
    return 0;
}
