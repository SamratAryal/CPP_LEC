#include<iostream>
using namespace std;

class celsius
{
    private:
    float temper;
    public:
    celsius()
    {
        temper=0;
    }
    celsius (float ftmp)
      {
        temper=(ftmp-32)*5/9;
      }
      void showtemper()
      {
        cout<<"Temperature in celsius is:"<<temper<<endl;
      }
};
int main()
{
    celsius c1;
    float fr;
    cout<<"enter temperature in fhrenhit measuremnt:";
    cin>>fr;
    c1=fr;
    c1.showtemper();
}
