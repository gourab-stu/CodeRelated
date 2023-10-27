// count_and_print_all_factors.cpp
// count and print all factors using function in c++

#include<iostream>

using namespace std;

void factors(int n, int i=1, int count=0)
{
    for(    ; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            count++;
        } 
    }
    cout<<endl<<"There are "<<count<<" factors of "<<n<<endl;
}

int main()
{
    int num, i;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"The factors of "<<num <<" are: "<<endl;
    factors(num);
    return 0;
}