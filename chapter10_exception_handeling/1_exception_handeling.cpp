#include<iostream>
using namespace std;
 
 int main()
 {
    float x=-1;
    cout<<"Before try\n";
    try{
        cout<<"Inside try\n";
        if(x<0);
        {
            throw x;
            cout<<"After throw\n";  //usually objects are thrown in oop
        }
    }
    catch(int x)
    {
        cout<<"Exception caught.Int type\n";
        //handle int exception here
    }
    catch(float x)
    {
        cout<<"Exception caught.float type\n";
        //handle float exception here
    }
    cout<<"After caught\n";
    return 0;
 }