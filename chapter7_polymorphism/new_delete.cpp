#include<iostream>
using namespace std;
int main()
{
    int *pointint;
    float *pointfloat;
    //allocation of memory on the heap area of the stack
    pointint=new int;
    pointfloat=new float;
    cout<<"Address assigned to pointint="<<pointint<<endl;
    cout<<"Address assigned to pointfloat="<<pointfloat<<endl;
//dynamically allocating memory
    *pointint=50;
    *pointfloat=50.50;

    cout<<"Value assigned to pointint="<<*pointint<<endl;
    cout<<"Value assigned to pointfloat="<<*pointfloat<<endl;

    //deallocating memory
     delete pointint;
     delete pointfloat;
}