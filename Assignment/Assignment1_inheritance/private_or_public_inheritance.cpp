//public or private inheritance
#include<iostream>
using namespace std;
class A
{
private:
int pvtdataA;
protected:
int protdataA;
public:
int pubdataA;
};
class B : public A 
{
public:
void func()
{
    int a;
    a=pvtdataA;   //error:not accessible.
  a=protdataA;    //ok
  a=pubdataA;  //ok

}
};
class c : protected A
{
    public:
    void func()
    {
        int a;
       a=pvtdataA;   //error: not accessible
        a=protdataA;   //ok
        a=pubdataA;    //ok
    }
};
class D : private A 
{
    public:
    void func()
    {
        int a;
        a=pvtdata;   //error: not accessible
        a=protdataA;  //ok
        a=pubdataA;    //ok
    }
};
int main()
{
    int num;
    B objB1;
    num=objB1.pvtdataA;  //error: not accessible
    num=objB1.protdataA;  //error: not accessible
    num=objB1.pubdataA;     

    c objc;
     num=objc.pvtdataA;    //error: not accessible
    num=objc.protdataA;       //error: not accessible
    num=objc.pubdataA;       //error: not accessible

    D objD;
     num=objD.pvtdataA;     //error: not accessible
    num=objD.protdataA;      //error: not accessible
    num=objD.pubdataA;       //error: not accessible
    return 0;                  
}