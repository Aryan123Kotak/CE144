#include<iostream>
using namespace std;
class experiance
{
    int year;
    int month;
public:
    experiance()
    {
        year=0;
        month=0;
    }
    experiance(float &m)
    {
        year=m;
        month=(m-year)*12;
    }
    void display()
    {
        cout<<"Employee Experience is "<<year<<" years and "<<month<<" months ";
    }

};
int main()
{
    experiance aa;
    float emp_exp;
    cout<<"Enter employee experiance :";
    cin>>emp_exp;
    aa=emp_exp;
    aa.display();
    return 0;
}
