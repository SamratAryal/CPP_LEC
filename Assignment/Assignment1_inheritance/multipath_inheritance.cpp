//an example of multipath inheritance
#include<iostream>
using namespace std;
class student
{
    protected:
    char name[25];
    int studID;
    public: 
    void getstdata()
    {
        cout<<"Enter name of student: ";
        cin>>name;
        cout<<"Enter student ID: ";
        cin>>studID;

    }
    void showstdata()
    {
        cout<<"\nName: "<<name;
        cout<<"\nStudent ID: "<<studID;

    }

};
class internalExam : virtual public student
{
    protected:
    int mark1,mark2,mark3;
    public:
    void getdata()
    {
        cout<<"Enter internal marks in three subject: ";
        cin>>mark1>>mark2>>mark3;
    }
    void showdata()
    {
        cout<<"\nInternal marks in subject 1: "<<mark1;
        cout<<"\nInternal marks in subject 2: "<<mark2;
        cout<<"\nInternal marks in subject 3: "<<mark3;
    }
    int totalinternalmark()
    {
        return (mark1+mark2+mark3);

    }
};
class Externalexam : virtual public student
{
    protected:
    int mark1,mark2,mark3;
    public:
    void getdata()
    {
        cout<<"Enter External marks in three subjects: ";
        cin>>mark1>>mark2>>mark3;

    }
    void showdata()
    {
        cout<<"\nExternal marks in subject 1: "<<mark1;
        cout<<"\nExternal marks in subject 2: "<<mark2;
        cout<<"\nEXternal marks in subject 3: "<<mark3;
    }
    int totalExternalmarks()
    {
        return (mark1+mark2+mark3);
    }
};
class result : public internalExam, public Externalexam
{
    public:
    void getdata()
    {
        internalExam::getdata();
        Externalexam::getdata();
    }
    void showdata()
    {
        internalExam::showdata();
        Externalexam::showdata();

    }
    int totalmarks()
    {
        return(totalinternalmark()+totalExternalmarks());
    }
};
int main()
{
    result r;
    cout<<"Enter data for student: "<<endl;
    r.getstdata();
    cout<<"\nEnter Marks: "<<endl;
    r.getdata();
    cout<<"\nData for the student: "<<endl;
    r.showdata();
    cout<<"\nTotal Marks: "<< r.totalmarks();
   
    return 0;

}