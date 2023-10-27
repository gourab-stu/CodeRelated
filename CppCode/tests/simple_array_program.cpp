// simple_array_program.cpp
// printing array elements and the addresses they are stored

#include<iostream>

using namespace std;

int main()
{
    int arr[10]={100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int i;
    int* ptr=arr;
    for(i=0; i<10; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<", address = "<<ptr<<endl;
        ptr++;
    }
    return 0;
}