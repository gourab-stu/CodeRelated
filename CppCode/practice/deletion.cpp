// deletion.cpp
// program to delete an element from the provided position in an array

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
    int remove(int position)
    {
        int s=0;
        for(int i=0; i<size; i++)
        {
            if((i+1)==position)
            {
                size--;
                for(int j=i; j<size; j++)
                {
                    arr[j]=arr[j+1];
                }
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
    int pos;
    cout<<"Enter the position to delete element: ";
    cin>>pos;
    cout<<ob.remove(pos)<<" element deleted successfully"<<endl;
    ob.display();
    return 0;
}