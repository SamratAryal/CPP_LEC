#include<iostream>
using namespace std;
class fibonacci
{
    private:
    int num1,num2;
    public:
    fibonacci()
    {
        num1=0;
        num2=1;
    }
    void operator ++()
    {
        int temp;
        temp=num1;
        num1=num1+num2;
        num2=temp;
    }
    void showdata()
    {
        cout<<num1<<"\t";
    }
};
int main()
{
    fibonacci f;
    int n,i;
    cout<<"Enter number of term in fibonacci series:";
    cin>>n;
    cout<<"Fibonacci series:"<<endl;
    cout<<"0"<<"\t";
    for(i=0;i<n;i++)
    {
        ++f;
        f.showdata();
    }
}