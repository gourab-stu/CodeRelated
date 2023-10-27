// odd_valued_elements_of_an_array.cpp
// program to take an array from user and printing odd valued elements

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
    int odds()
    {
        int odd_elements=0;
        cout<<"The odd elements are: "<<endl;
        for(int i=0; i<size; i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<"arr["<<i<<"]="<<arr[i]<<endl;
                odd_elements++;
            }
        }
        if(odd_elements==0)
            cout<<endl<<"\t***No odd elements entered***"<<endl;
        
        return odd_elements;
    }
};

int main()
{
    array_op ob;
    cout<<ob.odds()<<" odd elements found";
    return 0;
}