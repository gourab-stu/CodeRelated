// default_argument.cpp
// example of default argument

#include<iostream>

using namespace std;

double AreaOfCircle(double r, double pi=3.14)
{
    return pi*r*r;
}

int main()
{
    double r;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;
    cout<<"Area is "<<AreaOfCircle(r);
    return 0;
}