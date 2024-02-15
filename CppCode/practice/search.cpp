// search.cpp
// program to search an element from an array

#include<iostream>

using namespace std;

class array_op
{
private:
    int size;
    int arr[100];

public:
    array_op()
    {
        cout<<"Enter the size of the array: ";
        cin>>size;
        if(size==0)
            exit(0);
        cout<<"Enter the elements: "<<endl;
        for(int i=0; i<size; i++)
        {
            cout<<"arr["<<i<<"]=";
            cin>>arr[i];
        }
    }
    int search(int element)
    {
        int i, location=0;
        for(i=0; i<size; i++)
        {
            if(arr[i]==element)
            {
                location=1;
                break;
            }
        }
        if(location==1)
            return i+1;
        else
            return location;
    }
};

int main()
{
    array_op ob;
    int n, r;
    cout<<"Enter the element to search: ";
    cin>>n;
    r=ob.search(n);
    if(r==0)
        cout<<"Element not found";
    else
        cout<<"Element found at location "<<r;
    return 0;
}