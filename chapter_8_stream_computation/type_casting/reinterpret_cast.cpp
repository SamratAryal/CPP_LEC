#include<iostream>
using namespace std;
int main()
{
    int i=50;
    cout<<"value of address of i is:"<<&i<<endl;
    int *p;



    int ivar;
    double dvar;
    int *pivar;
    double *pdvar;
    void *pvoid;

    pivar=reinterpret_cast<int*>(&dvar); 
    pivar=reinterpret_cast<int*>(&pdvar);
    
    cout<<"pivar="<<dvar<<endl;
    cout<<"pivar="<<dvar<<endl;
    cout<<"pivar="<<pdvar<<endl;


return 0;
}