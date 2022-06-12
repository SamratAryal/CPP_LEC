//an example of multilevel inheritance
#include<iostream>
using namespace std;
class person
{
    private:
    char name[25];
    char address[25];
    public:
    void getdata()
    {
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"Address: ";
        cin>>address;
    }
    void showdata()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAddress: "<<address;

    }
};
class employee: public person
{
    private:
    int empId;
    float salary;
    public:
    void getdata()
    {
        person::getdata();
        cout<<"Enter employee ID:";
        cin>>empId;
        cout<<"\nEnter salary:";
        cin>>salary;

    }
    void showdata()
    {   person::showdata();
        cout<<"\nEmployee ID:"<<empId;
        cout<<"\nSalary:"<<salary;
    }
};
class manager : public employee
{
   private:
   char hidegree[25];
   public:
   void getdata()
   {
    employee::getdata();
    cout<<"Enter highest degree:";
    cin>>hidegree;

   }
   void showdata()
   {
    employee::showdata();
    cout<<"\nHighest degree:"<<hidegree;
   }
};
int main()
{
    manager mgr;
    cout<<"\nEnter data on manager:";
    mgr.getdata();
    cout<<"Data on manager:";
    mgr.showdata();
    return 0;
}