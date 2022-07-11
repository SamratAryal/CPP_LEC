#include<iostream>
#include<string>
using namespace std;
class person
{
    protected:
    char name[40];
    int code;
    public:
    person()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter code:";
        cin>>code;
    }
    void showdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Code:"<<code<<endl;
    }
    void update_data()
    {
       cout<<"Enter name:";
        cin>>name;
        cout<<"Enter code:";
        cin>>code; 
    }
};
class account : public virtual person
{
    protected:
    int pay;
    public:
    account()
    {
        cout<<"Enter amount to pay:";
        cin>>pay;
    }
    void showdata()
    {
        cout<<"Amount to pay:"<<pay<<endl;
    }
    void update_data()
    {
        cout<<"Enter amount to pay:";
        cin>>pay;
    }
};
class admin: public virtual person
{
    protected:
    int experience;
    public:
   admin()
    {
        cout<<"Enter year of experience:";
        cin>>experience;

    }
    void showdata()
    {
        cout<<"Year of experience:"<<experience<<endl;
    }
    void update_data()
    {
        cout<<"Enter year of experience:";
        cin>>experience; 
    }
};
class master : public account,public admin
{
    public:
   
    void showdata()
    {
        person::showdata();
        account::showdata();
        admin::showdata();
    }
    void update_data()
    {
        person::update_data();
        account::update_data();
        admin::update_data();
    }
};
int main()
{
   
    master m;
    
    char yes;
    
    cout<<"If you want to update data press 'y' else press any button...."<<endl;
    cin>>yes;

    if(yes=='y')
    {
        m.update_data();
        cout<<"*****Displying Details*****\n";
        m.showdata();

    }
    else 
    {
        cout<<"*****Displaying Details*****\n";
      m.showdata();
    }
    return 0;
}