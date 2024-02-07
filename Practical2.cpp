#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
struct Employee
{
    private:
    int Employee_Id;
    string Employee_Name,Qualification,Contact_Num;
    float Experience;
    public:
    void getdata()
    {
        cout<<"Enter Employee Id: ";
        cin>>Employee_Id;
        cout<<"Enter Employee Name: ";
        fflush(stdin);
        getline(cin,Employee_Name);
        cout<<"Enter Employee Qualification: ";
        getline(cin,Qualification);
        fflush(stdin);
        cout<<"Enter Employee Experience(In Years): ";
        cin>>Experience;
        fflush(stdin);
        cout<<"Enter Employee Contact Number: ";
        cin>>Contact_Num;
    }
    int putdata(int a)
    {
        if(Employee_Id==a)
        {
            cout<<endl<<"*******************************************"<<endl;
            cout<<endl<<"Employee Name"<<setw(5)<<": "<<Employee_Name<<endl;
            cout<<endl<<"Qualification"<<setw(5)<<": "<<Qualification<<endl;
            cout<<endl<<"Experience"<<setw(8)<<": "<<Experience<<" Years"<<endl;
            cout<<endl<<"Contact Number"<<setw(4)<<": "<<Contact_Num<<endl;
            cout<<endl<<"******************************************"<<endl;
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    struct Employee Emp[100];
    int No_Of_Employees,i,find_Id,C;
    char ch;
    cout<<"Enter Number Of Employees: ";
    cin>>No_Of_Employees;
    cout<<endl;
    for(i=0;i<No_Of_Employees;i++)
    {
        Emp[i].getdata();
    }
    system("CLS");
    fflush(stdin);
    do
    {
        cout<<"Enter an Employee Id: ";
        fflush(stdin);
        cin>>find_Id;
        for(i=0;i<No_Of_Employees;i++)
        {
            C = Emp[i].putdata(find_Id);
            if(C==1)
            break;
        }
        if (i==No_Of_Employees)
        {
            cout<<endl<<"*"<<endl;
            cout<<endl<<"ERROR :ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl;
            cout<<endl<<"*"<<endl;
        }
        cout<<endl<<"Press Y to get another employee detail,Press N to exit: ";
        fflush(stdin);
        cin>>ch;
        cout<<endl;
    } while (ch=='y'||ch=='Y');
    return 0;
}
