// structure_example.cpp
// program to take & print student data in a structure variable

#include<iostream>

using namespace std;

struct subject
{
    char cc[30], GE1[30], GE2[30], AECC1[5], AECC2[9];
};

struct course
{
    char cName[7], cType[8];
    struct subject sub;
};

struct student
{
    char sName[30];
    long int clgRoll, regNo, mobNo;
    struct course c;
};

int collect_data(int &a, struct student &x)
{
    int choice=1;
    if(a>0)
    {
        cout<<"["<<a<<" data(s) added successfully]\n"<<endl;
    }
    cout<<"Enter 1 to add data (max 10 allowed)"<<endl;
    cout<<"Enter 0 to stop and display"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\nEnter student name: ";
        cin>>x.sName;
        cout<<"Enter course name: ";
        cin>>x.c.cName;
        cout<<"Enter course type: ";
        cin>>x.c.cType;
        cout<<"Enter CC name: ";
        cin>>x.c.sub.cc;
        cout<<"Enter GE1 name: ";
        cin>>x.c.sub.GE1;
        cout<<"Enter GE2 name: ";
        cin>>x.c.sub.GE2;
        cout<<"Enter AECC1 name: ";
        cin>>x.c.sub.AECC1;
        cout<<"Enter AECC2 name: ";
        cin>>x.c.sub.AECC2;
        cout<<"Enter college Roll no: ";
        cin>>x.clgRoll;
        cout<<"Enter registration no: ";
        cin>>x.regNo;
        cout<<"Enter mobile no: ";
        cin>>x.mobNo;
        a++;
    }
    return choice;
}

void display_data(struct student &stu)
{
    cout<<"Student name: "<<stu.sName<<endl;
    cout<<"Course name: "<<stu.c.cName<<endl;
    cout<<"Course type: "<<stu.c.cType<<endl;
    cout<<"Core Course: "<<stu.c.sub.cc<<endl;
    cout<<"GE1: "<<stu.c.sub.GE1<<endl;
    cout<<"GE2: "<<stu.c.sub.GE2<<endl;
    cout<<"AECC1: "<<stu.c.sub.AECC1<<endl;
    cout<<"AECC2: "<<stu.c.sub.AECC2<<endl;
    cout<<"College Roll no: "<<stu.clgRoll<<endl;
    cout<<"Registration no: "<<stu.regNo<<endl;
    cout<<"Mobile no: "<<stu.mobNo<<endl<<endl;
}

int main()
{
    int ch=1, k=0;
    struct student y[10];
    do
    {
        ch=collect_data(k, y[k]);
    } while((ch==1)&&(k<=9));
    if(k>0)
    {
        cout<<"[Displaying "<<k<<" out of 10 data(s)]\n"<<endl;
        for(int j=0; j<k; j++)
        {
            display_data(y[j]);
        }
    }
    cout<<"\n[Total size of data(s) "<<k*sizeof(y)<<" bytes]"<<endl;
    return 0;
}