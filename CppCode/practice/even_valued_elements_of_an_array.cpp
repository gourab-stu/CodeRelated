// even_valued_elements_of_an_array.cpp
// program to take an array from user and printing even valued elements

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
    int evens()
    {
        int even_elements=0;
        cout<<"The even elements are: "<<endl;
        for(int i=0; i<size; i++)
        {
            if(arr[i]%2==0)
            {
                cout<<"arr["<<i<<"]="<<arr[i]<<endl;
                even_elements++;
            }
        }
        if(even_elements==0)
            cout<<endl<<"\t***No even elements entered***"<<endl;
        return even_elements;
    }
};

int main()
{
    array_op ob;
    cout<<ob.evens()<<" even elements found";
    return 0;
}