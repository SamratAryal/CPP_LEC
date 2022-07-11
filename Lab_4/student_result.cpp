#include<iostream>
using namespace std;
class student
{
    protected:
    char name[40];
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>roll;
    }
    void showdata()
    {
        cout<<"Name of student:"<<name<<endl;
        cout<<"Roll number:"<<roll<<endl;
    }
};
class Test : public student
{
    protected:
    float math;
    float English;
    public:
    void getdata()
    {
        student::getdata();
        cout<<"Enter mark in math:";
        cin>>math;
        cout<<"Enter mark in English:";
        cin>>English;
    }
    void showdata()
    {
        student::showdata();
        cout<<"Mark in Math:"<<math<<endl;
        cout<<"Mark in English:"<<English<<endl;
    }
};
class sport : public student
{
    protected:
    int score;
    public:
    void getdata()
    {  
         cout<<"Enter sport's score:";
         cin>>score;
    }
    void showdata()
    {  
        cout<<"sport's score is:"<<score<<endl;
    }
};
class result : public Test, public sport
{
   protected:
   float total;
   public:
   void getdata()
   {
    Test::getdata();
    sport::getdata();
   }
   void showdata()
   {
    Test::showdata();
    sport::showdata();
    total=math+English+score;
    cout<<"The total is:"<<total<<endl;
   }
};
int main()
{
     result r;
     r.getdata();
     cout<<"\n*****Displaying Student Data*****";
     r.showdata();
     return 0;
}