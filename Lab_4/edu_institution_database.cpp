#include<iostream>
using namespace std;

class staff
{
    protected:
    int code;
    char name[40];
    public:
    void getdata()
    {
      cout<<"\nEnter code of staff:"<<endl;
      cin>>code;
      cout<<"Enter name of staff:"<<endl;
      cin>>name;

    }
    void showdata()
    {
        cout<<"\ncode of staff:"<<code;
        cout<<"\nName of staff:"<<name;
    }
};
class teacher : public staff
{
    protected:
    char subject[40];
    char publication[40];
    public:
    void getdata()
    {
        cout<<"Teacher";
        staff::getdata();
        cout<<"subject:";
        cin>>subject;
        cout<<"Name of publication of book:";
        cin>>publication;
    }
    void showdata()
    {
        staff::showdata();
        cout<<"\nSubject"<<subject;
        cout<<"\nName of publication of book:"<<publication;

    }
};
class officer : public staff
{
    protected:
    char grade[40];
    public:
    void getdata()
    {
        staff::getdata();
        cout<<"Grade of officer:";
        cin>>grade;
    }
    void showdata()
    {
        cout<<"Officer";
        staff::showdata();
        cout<<"\nGrade of officer:"<<grade<<endl;
        
    }

};
class Typist: public staff
{
   protected:
   int speed;
   public:
   void getdata()
   {
    staff::getdata();
    cout<<"Speed of typing";
    cin>>speed;

   }
   void showdata()
   {
    cout<<"Typist";
    staff::showdata();
    cout<<"\nSpeed of Typing:"<<speed<<endl;
   }

};
class casual : public Typist
{
    protected:
    float daily_wages;
    public:
    void getdata()
    {
        Typist::getdata();
        cout<<"Daily wages of casual typist:";
        cin>>daily_wages;
    }
    void showdata()
    {
        cout<<"Casual Typist";
        Typist::showdata();
        cout<<"Daily wages of casual typist:"<<daily_wages<<endl;

    }
};
class regular : public Typist
{
    protected:
    float daily_wages;
    public:
    void getdata()
    {
        Typist::getdata();
        cout<<"Daily wages of regular typist:";
        cin>>daily_wages;

    }
   void showdata()
   {
    Typist::showdata();
    cout<<"\nDaily wages of regular typist:"<<daily_wages<<endl;
   }
};
int main()
{
    teacher tech;
    officer ofcr;
    casual csl;
    regular reg;
    tech.getdata();
    tech.showdata();
    ofcr.getdata();
    ofcr.showdata();
    csl.getdata();
    csl.showdata();
    reg.getdata();
    reg.showdata();
    return 0;
}
