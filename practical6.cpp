#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class Employee
{
private:
    int Employee_Id;
    string Employee_Name;
    string Qualification;
    long long int Contact_Num;
    float Experience;
    int number;
    static float Avg_Exp;
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
        cout<<"Enter Employee Experience: ";
        cin>>Experience;
        fflush(stdin);
        cout<<"Enter Employee Contact Number: ";
        cin>>Contact_Num;
        Avg_Exp+=Experience;
    }
    static void AverageExperience(int &no_emp)
    {

        Avg_Exp = Avg_Exp / no_emp;
        cout << "The average experience of the employee:" << fixed << setprecision(2) << Avg_Exp << endl;
    }
    int putdata(int a)const
    {
        if(Employee_Id==a)
        {
            cout<<endl<<"*******************************************"<<endl;
            cout<<endl<<"Employee Name"<<setw(5)<<": "<<Employee_Name<<endl;
            cout<<endl<<"Qualification"<<setw(5)<<": "<<Qualification<<endl;
            cout<<endl<<"Experience"<<setw(8)<<": "<<Experience<<" Years"<<endl;
            cout<<endl<<"Contact Number"<<setw(4)<<": "<<Contact_Num<<endl;
            cout<<endl<<"******************************************"<<endl;
        }
    }
};
      float Employee::Avg_Exp=0;

int main()
{
    class Employee E[100];
    int No_Of_Employee,i,find_Id,C;
    char ch;
    int number;
    cout<<"Enter Number Of Employees: ";
    cin>>No_Of_Employee;
    cout<<endl;
    for(i=0; i<No_Of_Employee; i++)
    {
        E[i].getdata();
    }
    cout<<"1. Employee detail \n 2. Average Experience \n 3.New Employee detail "<<endl;
    cout<<"Enter number :";
    cin>>number;
    fflush(stdin);
    do
    {

    switch(number)
    {
    case 1:
            cout<<"Enter an Employee Id: ";
            fflush(stdin);
            cin>>find_Id;
            for(i=0; i<No_Of_Employee; i++)
            {
                C = E[i].putdata(find_Id);
                if(C==1)
                    break;
            }
            if (i==No_Of_Employee)
        {
            cout<<endl<<"******************************************"<<endl;
            cout<<endl<<"ERROR :ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl;
            cout<<endl<<"*****************************************"<<endl;
        }
            cout<<endl<<"Press Y to get another employee detail,Press N to exit: ";
            fflush(stdin);
            cin>>ch;
            cout<<endl;
            break;
    case 2:
        Employee::AverageExperience(No_Of_Employee);
        break;
    }
        }while (ch=='y'||ch=='Y');
    return 0;
}
