// reverse_array.cpp
// program to reverse an array

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
    void reverse()
    {
        int temp, a=size;
        for(int i=0; i<size/2; i++)
        {
            temp=arr[i];
            arr[i]=arr[--a];
            arr[a]=temp;
        }
    }
    void display()
    {
        cout<<"The new array is"<<endl;
        for(int i=0; i<size; i++)
        {
            cout<<"arr["<<i<<"]="<<arr[i]<<endl;
        }
    }
};

int main()
{
    array_op ob;
    ob.reverse();
    ob.display();
    return 0;
}