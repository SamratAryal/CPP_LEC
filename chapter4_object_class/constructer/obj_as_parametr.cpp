#include<iostream>
using namespace std;

class student
{
public:
float marks;

student(float m)
{
    marks = m;
}
};
void calcAverage(student s1,student s2)
{
float average=(s1.marks+s2.marks)/2;

cout<<"The average is:"<<average<<endl;

}
int main()
{
    student s1(50.50),s2(60.60);
    calcAverage(s1,s2);
    return 0;
}