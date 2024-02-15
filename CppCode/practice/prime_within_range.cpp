// prime_within_range.cpp
// prime number within a range in c++

#include<iostream>

using namespace std;

int main()
{
    int lv, uv, i, j;
    cout<<"Enter the lower limit: "<<endl;
    cin>>lv;
    cout<<"Enter the upper limit: "<<endl;
    cin>>uv;
    cout<<"Prime numbers from "<<lv<<" to "<<uv<<" are:"<<endl;
    for(i=lv; i<=uv; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                break;
            else
                continue;
        }
        if(i==j)
            cout<<i<<endl;
    }
    return 0;
}