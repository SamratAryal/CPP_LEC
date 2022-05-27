#include<iostream>
using namespace std;
struct student
{
    char name[20];
    char address[20];
    int roll;
}st[3];
int main()
{
    cout<<"Enter the information of students:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name:";
        cin>>st[i].name;
        cout<<"Enter address:";
        cin>>st[i].address;
        cout<<"Enter roll no.:";
        cin>>st[i].roll;
    }
    cout<<"Displying student info.........";
    for(int i=0;i<3;i++)
    {
    cout<<"\nName:"<<st[i].name;
    cout<<"\nAddress:"<<st[i].address;
    cout<<"\nRoll no.:"<<st[i].roll;
    }
    return 0;
}