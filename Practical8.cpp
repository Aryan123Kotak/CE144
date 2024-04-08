#include <iostream>
#include <iomanip>
using namespace std;
class TeachingEmployee;
class NonTeachingEmployee;
class Employee
{
private:
    int Emp_Id;
    string Emp_Name;
    string Qualification;
    float Experience;
    long long int ContactNumber;
    static float Avg_Exp;

protected:
    void getempdata()
    {
        cout << "Enter the employee id(positive integer):";
        cin >> Emp_Id;
        cout << "Enter the employee name:";
        fflush(stdin);
        getline(cin, Emp_Name);
        cout << "Enter the qualification:";
        cin >> Qualification;
        cout << "Enter the experience of employee(in years):";
        cin >> Experience;
        cout << "Enter the contact number of employee:";
        cin >> ContactNumber;
        Avg_Exp += Experience;
    }
    void putempdata()
    {
        cout << "Employee Name" << setw(5) << ":" << Emp_Name << endl;
        cout << "Qualification" << setw(5) << ":" << Qualification << endl;
        cout << "Experience" << setw(8) << ":" << Experience << "years" << endl;
        cout << "Contact Number" << setw(4) << ":" << ContactNumber << endl;
    }
    int searchemp(int &Eid)
    {
        if (Emp_Id == Eid)
        {
            putempdata();
            return 1;
        }
    }

public:
    static void AverageExperience(int &t, int &nt)
    {

        Avg_Exp = Avg_Exp / (t + nt);
        cout << "The average experience of the employee:" << fixed << setprecision(2) << Avg_Exp << endl;
    }
};
class TeachingEmployee : public Employee
{
private:
    string Designation, Specialisation, PayScale;

public:
    void gettempdata()
    {
        getempdata();
        cout << "Enter the Designation:";
        cin >> Designation;
        cout << "Enter the Specialisation:";
        cin >> Specialisation;
        cout << "Enter the pay scale:";
        cin >> PayScale;
    }
    void puttempdata()
    {
        cout << "Designation" << setw(9) << ":" << Designation << endl;
        cout << "Specialisation" << setw(13) << ":" << Specialisation << endl;
        cout << "Pay Scale" << setw(9) << ":" << PayScale << endl;
    }
    int searchtemp(int &Eid)
    {
        if (searchemp(Eid) == 1)
        {
            puttempdata();
            return 1;
        }
    }
};
class NonTeachingEmployee : public Employee
{
private:
    long int Salary;

public:
    void getntempdata()
    {
        getempdata();
        cout << "Enter the Salary:";
        cin >> Salary;
    }
    void putntempdata()
    {
        cout << "Salary" << setw(9) << ":" << Salary << endl;
    }
    int searchntemp(int &Eid)
    {
        if (searchemp(Eid) == 1)
        {
            putntempdata();
            return 1;
        }
    }
};
float Employee::Avg_Exp = 0;
int main()
{
    int t, nt, Eid, i, b;
    char a;
    cout << "Enter the number of teaching  employee:";
    cin >> t;
    cout << "Enter the number of non-teaching employee:";
    cin >> nt;
    class TeachingEmployee *T;
    class NonTeachingEmployee *NT;
    T = new TeachingEmployee[t];
    NT = new NonTeachingEmployee[t];
    cout << "------Teaching Employee Details------" << endl;
    for (int i = 0; i < t; i++)
    {
        T[i].gettempdata();
    }
    cout << "------Non-Teaching Employee Details------" << endl;
    for (int i = 0; i < nt; i++)
    {
        NT[i].getntempdata();
    }

    do
    {
        cout << "1. To Display the employee details." << endl;
        cout << "2. To know the average experience" << endl;
        cout << "3.To exit the program." << endl;
        cin >> b;
        switch (b)
        {

        case 1:
            do
            {

                cout << "Enter the employee id:";
                cin >> Eid;
                for (i = 0; i < t + nt; i++)
                {
                    if (T[i].searchtemp(Eid) == 1 || NT[i].searchntemp(Eid))
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Enter Number is wrong";
                    }
                }
                if (i == t)
                    cout << "Error the entered employee id not found.";
                cout << "Enter 'Y' to continue or 'N' to exit";
                cin >> a;
            } while (a != 'N');
            break;
        case 2:
            Employee::AverageExperience(t, nt);
            break;
        case 3:
            cout << "You have successfully exited the program." << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
        }
    } while (b != 3);
}
