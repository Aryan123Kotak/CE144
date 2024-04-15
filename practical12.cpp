#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class result;
class student
{
    string Student_Id,Student_Name;
    int Semester;
    int a;
public:
    void getdata_stu()
    {
        cout<<"Enter student_id:";
        cin>>Student_Id;
        fflush(stdin);
        cout<<"Enter The Name of the Student:";
        cin>>Student_Name;
        cout<<"Enter The Semester of the Student:";
        cin>>Semester;
    }
    void putdata_stu()
    {
        cout<<"************************************************************************************"<<endl;
        cout<<"Student_Id"<<setw(12)<<":"<<setw(5)<<" "<<setw(-10)<<Student_Id<<endl;
        cout<<"Student_Name"<<setw(10)<<":"<<setw(5)<<" "<<setw(-10)<<Student_Name<<endl;
        cout<<"Semester"<<setw(14)<<":"<<setw(5)<<" "<<setw(-10)<<Semester<<endl;
        cout<<"************************************************************************************"<<endl;
    }
    void getdata_result(result &R);
    void putdata_result(result &R);
};
class result
{
    int Theory_Marks[3],Practical_Marks[3];
    string Sub_Name[3],Theory_Grade[3],Practical_Grade[3];
    int Theory_Grade_Number[3],Practical_Grade_Number[3];
    int Total_Grade=0;
    int credit;
    float SGPA;
    friend void student::getdata_result(result &R);
    friend void student::putdata_result(result &R);
};
void student::getdata_result(result &R)
{
    for ( a = 0; a < 3; a++)
    {

        cout<<"Enter Subject_Name"<<a+1<<":";
        fflush(stdin);
        getline(cin,R.Sub_Name[a]);
        cin>>R.credit;
        cout<<"Enter Theory_Marks of the Subject"<<a+1<<":";
        fflush(stdin);
        cin>>R.Theory_Marks[a];
        cout<<"Enter Practical_Marks of the Subject"<<a+1<<":";
        fflush(stdin);
        cin>>R.Practical_Marks[a];
    }
        for ( a = 0; a < 3; a++)
        {

            if(R.Theory_Marks[a]>=80)
            {
                R.Theory_Grade[a]="AA";
                R.Theory_Grade_Number[a]=10;
            }
            else if (R.Theory_Marks[a]>=73 && R.Theory_Marks[a]<80)
            {
                R.Theory_Grade[a]="AB";
                R.Theory_Grade_Number[a]=9;
            }
            else if (R.Theory_Marks[a]>=66 && R.Theory_Marks[a]<73)
            {
                R.Theory_Grade[a]="BB";
                R.Theory_Grade_Number[a]=8;
            }
            else if (R.Theory_Marks[a]>=60 && R.Theory_Marks[a]<66)
            {
                R.Theory_Grade[a]="BC";
                R.Theory_Grade_Number[a]=7;
            }
            else if (R.Theory_Marks[a]>=55 && R.Theory_Marks[a]<60)
            {
                R.Theory_Grade[a]="CC";
                R.Theory_Grade_Number[a]=6;
            }
            else if (R.Theory_Marks[a]>=50 && R.Theory_Marks[a]<55)
            {
                R.Theory_Grade[a]="CD";
                R.Theory_Grade_Number[a]=5;
            }
            else if (R.Theory_Marks[a]>=45 && R.Theory_Marks[a]<50)
            {
                R.Theory_Grade[a]="DD";
                R.Theory_Grade_Number[a]=4;
            }
            else
            {
                R.Theory_Grade[a]="FF";
                R.Theory_Grade_Number[a]=0;
            }
            R.Total_Grade += 4*R.Theory_Grade_Number[a];

        }
        for ( a = 0; a < 3; a++)
        {

            if(R.Practical_Marks[a]>=80)
            {
                R.Practical_Grade[a]="AA";
                R.Practical_Grade_Number[a]=10;
            }
            else if (R.Practical_Marks[a]>=73 && R.Practical_Marks[a]<80)
            {
                R.Practical_Grade[a]="AB";
                R.Practical_Grade_Number[a]=9;
            }
            else if (R.Practical_Marks[a]>=66 && R.Practical_Marks[a]<73)
            {
                R.Practical_Grade[a]="BB";
                R.Practical_Grade_Number[a]=8;
            }
            else if (R.Practical_Marks[a]>=60 && R.Practical_Marks[a]<66)
            {
                R.Practical_Grade[a]="BC";
                R.Practical_Grade_Number[a]=7;
            }
            else if (R.Practical_Marks[a]>=55 && R.Practical_Marks[a]<60)
            {
                R.Practical_Grade[a]="CC";
                R.Practical_Grade_Number[a]=6;
            }
            else if (R.Practical_Marks[a]>=50 && R.Practical_Marks[a]<55)
            {
                R.Practical_Grade[a]="CD";
                R.Practical_Grade_Number[a]=5;
            }
            else if (R.Practical_Marks[a]>=45 && R.Practical_Marks[a]<50)
            {
                R.Practical_Grade[a]="DD";
                R.Practical_Grade_Number[a]=4;
            }
            else
            {
                R.Practical_Grade[a]="FF";
                R.Practical_Grade_Number[a]=0;
            }
            R.Total_Grade += R.credit*R.Practical_Grade_Number[a];
        }
        R.SGPA = R.Total_Grade/24.00;
    }

void student::putdata_result(result &R)
{

    cout<<setw(30)<<" "<<setw(-8)<<"Theory"<<setw(7)<<" "<<"Practical"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<R.Sub_Name[i]<<setw(32-R.Sub_Name[i].length())<<" "<<R.Theory_Grade[i]<<setw(16)<<R.Practical_Grade[i]<<endl;
    }
    cout<<"************************************************************************************"<<endl;
    cout<<"S.G.P.A"<<setw(14)<<":"<<setw(5)<<fixed<<setprecision(2)<<R.SGPA;
}
int main()
{
    student s;
    result r;
    s.getdata_stu();
    s.getdata_result(r);
    s.putdata_stu();
    s.putdata_result(r);
}
