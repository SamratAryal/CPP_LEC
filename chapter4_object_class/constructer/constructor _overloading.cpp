#include<iostream>
using namespace std;

class Account
{
private:
int accno;
float balance;
public:
Account()     //constructor with no arguments
{
    accno=500,balance=600.55;
}
Account(int acc)  //costructer with one arguments 
{
    accno=acc;
    balance=0.0;
}
Account(int acc, float bal)   //Constructor with two arguments
{
    accno=acc; 
    balance=bal;
}
void display()
{
    cout<<"\nAccount no.="<<accno<<endl;
    cout<<"\nBalancce ="<<balance<<endl;
}

};  //end of class defination

int main()
{
    Account acc1;  //first constructor is called
    Account acc2(100);   //second constructor is called
    Account acc3(200,8000.50);   //third constructor is called
cout<<"Account information"<<endl;
acc1.display();
acc2.display();
acc3.display();

return 0;
}
