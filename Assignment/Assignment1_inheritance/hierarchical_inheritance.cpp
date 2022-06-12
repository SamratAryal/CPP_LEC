#include<iostream>
using namespace std;
class employee
{
    private:
    char name[25];
    int empID;
    float salary;
    public:
    void getdata()
    {
        cout<<"\nName of employee:";
        cin>>name;
        cout<<"Enter employee Id:";
        cin>>empID;
        cout<<"Enter salary:";
        cin>>salary;

    }
    void showdata()
    {
        cout<<"\nEmployee name :"<<name;
        cout<<"\nEmployee Id:"<<empID;
        cout<<"\nSalary:"<<salary;
    }
};
class manager:public employee
{
    private:
    char hidegree[25];
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter highest degree obtained:";
        cin>>hidegree;

    }
    void showdata()
    {
        employee::showdata();
        cout<<"\nHighest degree obtained is:"<<hidegree;
    }
};
class secretary : public employee
{
    private:
    float height;
    public:
    void getdata()
    {
        employee::getdata();
        
        cout<<"\nEnter height:";
        cin>>height;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"\nHeight:"<<height;

    }
};
class teacher : public employee
{
    private:
    int nperiods;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter number of periods:";
        cin>>nperiods;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"\nNumber of periods:"<<nperiods;
    }
};
int main()
{
    manager m;
    secretary s;
    teacher t;
    cout<<"Enter data on manager:";
    m.getdata();
    cout<<"\nEnter data on secretary:";
    s.getdata();
    cout<<"\nEnter data on teacher:";
    t.getdata();
    cout<<"\nData on manager:";
    m.showdata();
    cout<<"\nData on secretary:";
    s.showdata();
    cout<<"\nData on teacher:";
    t.showdata();
    return 0;
}
