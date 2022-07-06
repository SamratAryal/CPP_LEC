#include<iostream>
using namespace std;
class media
{
    protected:
    char title[25],pub[25];
    public:
    virtual void readdata();
    virtual void showdata()=0;
};
void media::readdata()
{
    cout<<"Enter title:";
    cin>>title;
    cout<<"Enter publiation:";
    cin>>pub;
}
class book : public media
{
private:
int no_of_pages;
public:
void readdata();
void showdata();
};
void book::readdata()
{
    media::readdata();
    cout<<"Enter number of pages:";
    cin>>no_of_pages;
}
void book::showdata()
{
    cout<<"***Data on book***";
    cout<<"Title of Book:"<<title<<endl;
    cout<<"publication of book:"<<pub<<endl;
    cout<<"Number of pages:"<<no_of_pages<<endl; 
}
class DVD : public media
{
    private:
    int dur;
    public:
    void readdata();
    void showdata();
};
void DVD::readdata()
{
    media::readdata();
    cout<<"Enter time duration of DVD:";
    cin>>dur;
}
void DVD::showdata()
{
    cout<<"\n***Data on DVD***"<<endl;
    cout<<"Title of DVD:"<<title<<endl;
    cout<<"time duration of DVD:"<<dur<<endl;
    cout<<"Publication of DVD:"<<pub<<endl;
}
int main()
{
    media *md;
    book bk;
    md=&bk;
    cout<<"Ente data on Book:"<<endl;
    md->readdata();
    md->showdata();

    DVD dv;
    md=&dv;
    cout<<"Ente data on DVD:"<<endl;
    md->readdata();
    md->showdata();
    return 0;
}