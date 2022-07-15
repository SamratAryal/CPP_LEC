#include<iostream>
using namespace std;
const int MAX=20;
template<class T>
class stack
{
    private:
    T arr[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(T data)
    {
        arr[++top]=data;
    }
    T pop()
    {
        return arr[top--];
    }
    int size()
    {
        return (top+1);
    }
};
int main()
{
    cout<<"stack for integer data type:";
    stack<int>s1;
     cout<<"size of stack: "<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout<<"size of stack: "<<s1.size()<<endl;
    cout<<"Number popped: "<<s1.pop()<<endl;
    cout<<"Number popped: "<<s1.pop()<<endl;
    cout<<"size of stack: "<<s1.size()<<endl;
    cout<<"Number popped: "<<s1.pop()<<endl;
    cout<<"size of array: "<<s1.size()<<endl;
    s1.push(44);
    cout<<"size of array: "<<s1.size()<<endl;
     cout<<"Number popped: "<<s1.pop()<<endl;
     cout<<"size of array: "<<s1.size()<<endl;
    return 0; 
}