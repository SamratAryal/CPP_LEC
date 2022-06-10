#include<iostream>
using namespace std;
 class account
 {
     public:
int salary=50000;
 };
 class programmer : public account
 {
     public:
     int bonus=5000;
 };
int main()
{
    programmer p1;
    cout<<"Salary="<<p1.salary<<endl;
    cout<<"Bonus="<<p1.bonus<<endl;
}