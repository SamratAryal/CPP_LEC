//an example of single inheritance

#include<iostream>
using namespace std;
 class student
 {
    char name[25];
    int studID;
    public:
    void getdata()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter student ID:";
        cin>>studID;
    }
    void showdata()
    {
        cout<<"Name:"<<name;
        cout<<"\nStudent ID:"<<studID;

    }
 };
 class leader:public student
 {
    private:
    char union_name[25];
    public:
    void getdata()
    {
        student::getdata();
        cout<<"Enter name of associated student union:\n";
        cin>>union_name;;

    }
    void showdata()
    {
        student::showdata();
        cout<<"\nName of associated student union: "<<union_name;

    }
 };
 int main()
 {
   leader led;
   cout<<"Enter data on leader of student union: \n"<<endl;
   led.getdata();
   cout<<"\nData on leader of student union:\n"<<endl;
   led.showdata();
   return 0;
 }