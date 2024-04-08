#include<iostream>
#include<iomanip>
using namespace std;
class experiance
{
    int year;
    int month;
public:
    operator float()
    {
        return(year + (month/12.0));
    }
    void input()
    {
        cout<<"Enter Employee Experiance in Year and Month";
        cout<<endl<<"Year: ";
        cin>>year;
        cout<<"Month: ";
        cin>>month;
    }
};
int main()
{
    experiance aa;
    aa.input();
    float emp_exp;
    emp_exp=aa;
    cout<<"Employee Experiance :"<<fixed<<setprecision(2)<<emp_exp;
}

