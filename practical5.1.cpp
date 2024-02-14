//this code prepared by ARYAN_KOTAK_23CE059
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int c;
class circle_area
{
private:
    float radius;
public:

    circle_area()//default constructer
    {
        radius=1;
        c++;
    }
    circle_area(float a)//paramiterise constructer
    {
        radius=a;
        c++;
    }
    circle_area(class circle_area &A)//copying constructer
    {
        radius=A.radius;
        c++;
    }
    void putdata()
    {
        cout<<"circle with radius "<<radius<<" has area "<<3.148*radius*radius<<endl;
    }
    ~ circle_area()//destructer
    {
        --c;
        cout<<"one object is deleted "<<endl<<"total active object are "<<c<<endl;
    }



};
int main()
{
    float r;
    cout<<"Enter radius of circle :";
    cin>>r;
    system("CLS");
    circle_area A;
    circle_area B(r);
    circle_area C(A);
    A.putdata();
    B.putdata();
    C.putdata();
}
