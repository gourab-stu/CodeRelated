// remove_duplicates_from_an_array.cpp
// program to delete the duplicate elements from an array

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
    int rm_duplicates(int rm_elements=0)
    {
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(arr[i]==arr[j])
                {
                    for(int k=0; k<size; k++)
                    {
                        arr[j]=arr[j+1];
                    }
                    rm_elements++;
                    j--;
                    size--;
                }
            }
        }
        return rm_elements;
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
    array_op ob1;
    cout<<"Removed "<<ob1.rm_duplicates()<<" elements"<<endl;
    ob1.display();
    return 0;
}