// prime_wihtin_range_using_function.cpp
// prime number within a range using function

#include<iostream>

using namespace std;

void prime(int n, int i=2) // here initializtion of i is passed as default argument 
{
    for(    ; i<n; i++) // the initialisation section is not set, as it is set previously
    {
        if(n%i==0)
            break;
        else
            continue;
    }
    if(n==i)
        cout<<i<<endl;
}

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
        prime(i);
    }
    return 0;
}