// This Program is created by Kotak_Aryan_23CE059
//This Program is created for calculating  C.G.P.A of 3 subjects
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    string Student_Id,Student_Name;
    int Semester,Theory_Marks[3],Practical_Marks[3];
    string Sub_Name[3],Theory_Grade[3],Practical_Grade[3];
    int a,Theory_Grade_Number[3],Practical_Grade_Number[3],Total_Grade=0;
    float CGPA;
    cout<<"Enter student_id:";
    cin>>Student_Id;
    fflush(stdin);
    cout<<"Enter The Name of the Student:";
    cin>>Student_Name;
    cout<<"Enter The Semester of the Student:";
    cin>>Semester;
    for ( a = 0; a < 3; a++)
    {

        cout<<"Enter Subject_Name"<<a+1<<":";
        fflush(stdin);
        getline(cin,Sub_Name[a]);
        cout<<"Enter Theory_Marks of the Subject"<<a+1<<":";
         fflush(stdin);
        cin>>Theory_Marks[a];
        cout<<"Enter Practical_Marks of the Subject"<<a+1<<":";
         fflush(stdin);
        cin>>Practical_Marks[a];
    }
    for ( a = 0; a < 3; a++)
    {

        if(Theory_Marks[a]>=80)
        {
          Theory_Grade[a]="AA";
          Theory_Grade_Number[a]=10;
        }
        else if (Theory_Marks[a]>=73 && Theory_Marks[a]<80)
        {
          Theory_Grade[a]="AB";
          Theory_Grade_Number[a]=9;
        }
        else if (Theory_Marks[a]>=66 && Theory_Marks[a]<73)
        {
          Theory_Grade[a]="BB";
          Theory_Grade_Number[a]=8;
        }
        else if (Theory_Marks[a]>=60 && Theory_Marks[a]<66)
        {
          Theory_Grade[a]="BC";
          Theory_Grade_Number[a]=7;
        }
         else if (Theory_Marks[a]>=55 && Theory_Marks[a]<60)
        {
          Theory_Grade[a]="CC";
          Theory_Grade_Number[a]=6;
        }
         else if (Theory_Marks[a]>=50 && Theory_Marks[a]<55)
        {
          Theory_Grade[a]="CD";
          Theory_Grade_Number[a]=5;
        }
         else if (Theory_Marks[a]>=45 && Theory_Marks[a]<50)
        {
          Theory_Grade[a]="DD";
          Theory_Grade_Number[a]=4;
        }
        else
        {
            Theory_Grade[a]="FF";
            Theory_Grade_Number[a]=0;
        }
        Total_Grade += 4*Theory_Grade_Number[a];

    }
    for ( a = 0; a < 3; a++)
    {

        if(Practical_Marks[a]>=80)
        {
          Practical_Grade[a]="AA";
          Practical_Grade_Number[a]=10;
        }
        else if (Practical_Marks[a]>=73 && Practical_Marks[a]<80)
        {
          Practical_Grade[a]="AB";
          Practical_Grade_Number[a]=9;
        }
        else if (Practical_Marks[a]>=66 && Practical_Marks[a]<73)
        {
          Practical_Grade[a]="BB";
          Practical_Grade_Number[a]=8;
        }
        else if (Practical_Marks[a]>=60 && Practical_Marks[a]<66)
        {
          Practical_Grade[a]="BC";
          Practical_Grade_Number[a]=7;
        }
         else if (Practical_Marks[a]>=55 && Practical_Marks[a]<60)
        {
          Practical_Grade[a]="CC";
          Practical_Grade_Number[a]=6;
        }
         else if (Practical_Marks[a]>=50 && Practical_Marks[a]<55)
        {
          Practical_Grade[a]="CD";
          Practical_Grade_Number[a]=5;
        }
         else if (Practical_Marks[a]>=45 && Practical_Marks[a]<50)
        {
          Practical_Grade[a]="DD";
          Practical_Grade_Number[a]=4;
        }
        else
        {
          Practical_Grade[a]="FF";
          Practical_Grade_Number[a]=0;
        }
        Total_Grade += 4*Practical_Grade_Number[a];
    }
    CGPA = Total_Grade/24;

    cout<<"************************************************************************************"<<endl;
    cout<<"Student_Id"<<setw(12)<<":"<<setw(5)<<" "<<setw(-10)<<Student_Id<<endl;
    cout<<"Student_Name"<<setw(10)<<":"<<setw(5)<<" "<<setw(-10)<<Student_Name<<endl;
    cout<<"Semester"<<setw(14)<<":"<<setw(5)<<" "<<setw(-10)<<Semester<<endl;
    cout<<"************************************************************************************"<<endl;
    cout<<setw(30)<<" "<<setw(-8)<<"Theory"<<setw(7)<<" "<<"Practical"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<Sub_Name[i]<<setw(32-Sub_Name[i].length())<<" "<<Theory_Grade_Number[i]<<setw(16)<<Practical_Grade_Number[i]<<endl;
    }
    cout<<"************************************************************************************"<<endl;
    cout<<"C.G.P.A"<<setw(14)<<":"<<setw(5)<<CGPA;

return 0;
}
