// insertion.cpp
// program to insert an element in the provided position in an array

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
    int insert(int element, int position)
    {
        int s=0;
        for(int i=0; i<size; i++)
        {
            if((i+1)==position)
            {
                size++;
                for(int j=size; j>=i; j--)
                {
                    arr[j+1]=arr[j];
                }
                arr[i]=element;
                s++;
            }
        }
        return s;
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
    int pos, n;
    cout<<"Enter the position to insert element: ";
    cin>>pos;
    cout<<"Enter the element: ";
    cin>>n;
    cout<<ob.insert(n, pos)<<" element inserted successfully"<<endl;
    ob.display();
    return 0;
}