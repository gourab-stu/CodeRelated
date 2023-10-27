// sum_and_avg_of_an_array.cpp
// program to printing the sum and average of all the elements in an array

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
    int sum()
    {
        int sum=0;
        for(int i=0; i<size; i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
    double avg()
    {
        double avg=double(sum())/size;
        return avg;
    }
};

int main()
{
    array_op ob;
    cout<<"Sum of all the array elements is "<<ob.sum()<<endl;
    cout<<"Average of all the array elements is "<<ob.avg()<<endl;
    return 0;
}