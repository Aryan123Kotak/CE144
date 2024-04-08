#include<iostream>
using namespace std;
class centimeter;
class milimeter
{
    private:
    float mm;
    public:
    void input()
    {
        cout<<"Enter measurement in milimeter:";
        cin>>mm;
    }
    milimeter()
    {
        mm=0;
    }
    void display()
    {
      cout<<"measurement in milimeter"<<mm;
    }
     milimeter(centimeter &m);
     float getmm()
     {
        return mm;
     }
};
class centimeter
{
 private:
 float cm;
   public:
    void input()
    {
        cout<<"Enter measurement in centimeter:";
        cin>>cm;
    }
    centimeter()
    {
        cm=0;
    }
    centimeter(milimeter &m);

     void output()
    {
      cout<<"measurement in centimeter"<<cm;
    }
    float getcm()
     {
        return cm;
     }
};
milimeter::milimeter(centimeter &m)
    {
       mm=m.getcm()*10;
    };
centimeter::centimeter(milimeter &m)
    {
        cm=m.getmm()/10;
    };
int main()
{
    int number;
    milimeter X;
    centimeter Y;
    cout<<"Enter 1 : mm to cm converter"<<endl<<"Enter 2 : cm to mm converter"<<endl;
    cin>>number;
    switch (number)
    {
    case 1:
        {
          X.input();
          Y=X;
          Y.output();
        }
        break;
    case 2:
    {
         Y.input();
         X=Y;
         Y.output();

    }
    break;
    default:
    {
        cout<<"enter valid choice";
    }
        break;
    }
    return 0;
}
