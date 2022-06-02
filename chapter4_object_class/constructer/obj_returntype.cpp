#include<iostream>
using namespace std;

class student
{
    public:
    double marks1, marks2;

};
student createstudent()
{
    student student;
    student.marks1=100.00;
    student.marks2=200.50;

    cout<<"student.marks1="<<student.marks1<<endl;
    cout<<"student.marks2="<<student.marks2<<endl;
    return student;
}
int main()
{
    student student1;
    student1=createstudent();
    
}