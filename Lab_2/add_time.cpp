#include<iostream>
using namespace std;
 class Time
 {
    private:
    int hour,min,sec;
    public:
    void gettime()
    {
        cout<<"Enter Time"<<endl;
        cout<<"Hour="<<endl;
        cin>>hour;
        cout<<"Minute="<<endl;
        cin>>min;
        cout<<"Second="<<endl;
        cin>>sec;
    } 
    void display()
    {
        cout<<"("<<hour<<" Hour,"<<min<<" Minute,"<<sec<<" Second)"<<endl;

    }
    void sumtime(Time t1, Time t2)
    {
         sec=t1.sec+t2.sec;
         min=t1.min+t2.min+(sec/60);
        hour=t1.hour+t2.hour+(min/60);
       min=min%60;
      sec=sec%60;
    }
 };
 int main()
 {
     Time t1,t2,t3;
     cout<<"Enter first time:"<<endl;
     t1.gettime();
     cout<<"Enter second time:"<<endl;
     t2.gettime();
     t3.sumtime(t1,t2);
     t3.display();
     return 0;
 }