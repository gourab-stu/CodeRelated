// pattern10.cpp
// rotated number pyramid pattern of numbers

#include <iostream>

using namespace std;

int main()
{
    int rows, count = 0, k = 0;
    cout<<"Enter the number of lines: ";
    cin>>rows;
    for(int i=1; i<=rows; ++i)
    {
        for(int space=1; space<=rows-i; ++space, ++count)
            cout<<"\t";
        for(    ; k!=2*i-1; ++k)
        {
            if(count<=rows-1)
            {
                cout<<i+k<<"\t";
                ++count;
            }
        }
        count=k=0;
        cout<<endl;
    }
    return 0;
}