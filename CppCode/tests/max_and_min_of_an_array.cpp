// max_and_min_of_an_array.cpp
// program to print the maximum and the minimum element of an array

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
    int max()
    {
        int i=0, max=arr[i];
        for(i=0; i<size; i++)
        {
            if(max<arr[i])
                max=arr[i];
        }
        return max;
    }
    int min()
    {
        int i=0, min=arr[i];
        for(int i=0; i<size; i++)
        {
            if(min>arr[i])
                min=arr[i];
        }
        return min;
    }
};

int main()
{
    array_op ob;
    cout<<"The maximum element is "<<ob.max()<<endl;
    cout<<"The minimum element is "<<ob.min()<<endl;
    return 0;
}