#include<iostream>
using namespace std;
 
 struct student
 {
char name[30];
char address[20];
int roll;
 }student;

 int main()
 {
     cout<<"Enter your name:";
     cin>> student.name;
     cout<<"Enter your address: ";
     cin>>student.address;
     cout<<"Enter your roll number:";
     cin>>student.roll;

     cout<<"Name:"<<student.name;
     cout<<"\nAddress:"<<student.address;
      cout<<"\nRoll no.:"<<student.roll;
     return 0;
 }