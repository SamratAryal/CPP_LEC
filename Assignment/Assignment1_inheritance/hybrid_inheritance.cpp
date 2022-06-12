#include<iostream>
using namespace std;
class person
{
    private:
    char name[25];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;

    }
    void showdata()
    {
        cout<<"\nName:"<<name;
        cout<<"\nAge:"<<age;

    }
};
class exam
{
    protected:
    int mark1,mark2,mark3;
    public:
    void getdata()
    {
        cout<<"Enter marks in three subjects:";
        cin>>mark1>>mark2>>mark3;
    }
    void showdata()
    {
        cout<<"\nMarks in subject 1:"<<mark1;
        cout<<"\nMarks in subject 2:"<<mark2;
        cout<<"\nMarks in subject 3:"<<mark3;
    }
};
class student : public person
{
    private:
    int stdID;
    char stream[25];
    public:
    void getdata()
    {
        person::getdata();
        cout<<"Enter student ID:";
        cin>>stdID;
        cout<<"Enter stream:";
        cin>>stream;
    }
    void showdata()
    {
        person::showdata();
        cout<<"Student ID:"<<stdID;
        cout<<"Stream:"<<stream;
    }
};
class result : public student,public exam
{
    private:
    int total;
    public:
    void getdata()
    {
        student::getdata();
        exam::getdata();
      
    }
    void showdata()
    {
        student::getdata();
        exam::getdata();
        total=mark1+mark2+mark3;
        cout<<"\nTotal marks="<<total;
        cout<<"\nPercentage="<<static_cast<float>(total)/3;
    }
};
int main()
{
    
    result r;
    cout<<"Enter data for result processing:"<<endl;
    r.getdata();
    cout<<"\nData on student:"<<endl;
    r.showdata();
return 0;
}