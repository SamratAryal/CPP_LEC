//an example of multiple inheritance
#include<iostream>
using namespace std;
class student
{
  private:
  char name[25];
  int stdID;
  public:
  void getdata()
  {
    cout<<"Enter student name:";
    cin>>name;
    cout<<"Student ID:";
    cin>>stdID;
  }
  void showdata()
  {
    cout<<"Name:"<<name;
    cout<<"\nStudent ID:"<<stdID;

  }
};
class employee
{
    private:
    char org_name[25];
    int empID;
    public:
    void getdata()
    {
        cout<<"Enter the name of orginization: ";
        cin>>org_name;
        cout<<"Employee ID: ";
        cin>>empID;
    }
    void showdata()
    {
        cout<<"\nName of organization: "<<org_name<<endl;
        cout<<"Employee ID: "<<empID<<endl;
    }
};
class marketing_officer : public student, public employee
{
    private:
    int working_hours;
    public: 
    void getdata()
    {
        student::getdata();
        employee::getdata();
        cout<<"Enter working hours: ";
        cin>>working_hours;
    }
    void showdata()
    {
        student::showdata();
        employee::showdata();
        cout<<"Working hours: "<<working_hours;
    }
};
int main()
{
    marketing_officer moff;
    cout<<"Enter data of marketing officer:"<<endl;
    moff.getdata();
    cout<<"\nData of marketing officer"<<endl;
    moff.showdata();
    return 0;
}