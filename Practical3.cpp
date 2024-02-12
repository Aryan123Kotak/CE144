/*Task – 1 : Feed car details in the system
Number of cars (3 digit number), Model name (string with space), Fuel type (values can be petrol, diesel,
cng, electric), Showroom price (floating point number), Mileage (floating point number), Transmission
(values can be Manual or AMT), Tank capacity (floating point number), seating (1 digit number),
Airbags (values can be Yes or No)
Task – 2: Retrieve car data based on different options
Option 1 : Model name Option 2 : Fuel type Option 3 : Price range*/
#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdbool.h>
using namespace std;
class car_detail
{

public:
    int car_no;
    string car_name;
    int fuel_name;
    string fuel_type;
    string showroom_price;
    float mileage;
    int transmission_name;
    string transmission_type;
    float tank_capacity;
    int seating;
    string airbags;

    void getdata()
    {
        cout<<"Enter car_no :";
        cin>>car_no;
        cout<<"Enter car_name :";
        fflush(stdin);
        getline(cin, car_name);
        cout<<"choose fuel type :"<<endl;
        cout<<"(1)petrol (2)diesel (3)C.N.G (4)electric  :";
        cin>>fuel_name;

        switch(fuel_name)
        {
        case 1:
            fuel_type="petrol";
            break;
        case 2:
            fuel_type="diesel";
            break;
        case 3:
            fuel_type="CNG";
            break;
        case 4:
            fuel_type="electric";
            break;
        default:
            cout<<"number is wrong";
        }
        fflush(stdin);
        cout<<"Enter showroom prize :";
        cin>>showroom_price;
        cout<<"Enter mileage :";
        cin>>mileage;
        cout<<"Enter transmission_name "<<endl;
        cout<<"(1)manual (2)AMP"<<"\t"<<":";
        fflush(stdin);
        cin>>transmission_name;

        switch(transmission_name)
        {
        case 1:
            transmission_type="Manual";
            break;
        case 2:
            transmission_type="AMP";
            break;
        default:
            cout<<"number is wrong";
        }
        cout<<"Enter tank capacity :";
        cin>>tank_capacity;
        cout<<"Enter seating :";
        cin>>seating;
        cout<<"It contain airbag (yes or no) :";
        fflush(stdin);
        getline(cin, airbags);
    }
    void putdata()
    {
        cout<<car_name<<setw(5)<<" "<<setw(-15)<<fuel_type<<setw(5)<<" "<<setw(-15)<<showroom_price<<setw(10)<<" "<<setw(-15)<<mileage;
        cout<<setw(10)<<" "<<setw(-15)<<transmission_type<<setw(10)<<" "<<setw(-15)<<tank_capacity<<setw(19)<<" "<<setw(-15)<<seating;
        cout<<setw(15)<<airbags<<endl;
    }

};


int main()
{
    class car_detail car[20];
    int no_of_car,option;
    cout<<"Enter the no of car :";
    cin>>no_of_car;
    for(int i=0 ; i<no_of_car ; i++)
    {
        car[i].getdata();
    }
    system("CLS");
    cout<<"WELCOME TO TATA MOTORS"<<endl<<endl;
    cout<<"GET THE DETAILS AS PER YOUR PREFERENCE"<<endl<<endl;
    cout<<"1) Model name Option 2) Fuel type Option 3) Price range"<<endl<<endl;
    cout<<"Enter your option :";
    cin>>option;
    cout<<"---------------------------------------------------------"<<endl<<endl;
    switch(option)
    {
    case 1:
        int Modal_Number;
        cout<<"LIST OF TATA MOTORS"<<endl<<endl;
        for(int i=0 ; i<no_of_car ; i++)
        {
            cout<<"("<<i+1<<") "<<car[i].car_name<<"\t";
        }
        cout<<endl<<endl;
        cout<<"CHOOSE YOUR CAR TO GET DETAILS :";
        cin>>Modal_Number;
        cout<<endl;
        cout<<"Modal"<<setw(10)<<"Fuel"<<setw(10)<<"Prize";
        cout<<setw(15)<<"Mileage";//15
        cout<<setw(15)<<"Transmission";//15
        cout<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating";
        cout<<setw(15)<<"Airbags"<<endl<<endl;
        car[Modal_Number].putdata();
        break;

    case 2:
        int fuel;
        cout<<"TATA MOTERS ARE AVAILABLE WITH THIS FUEL TYPE"<<endl<<endl;
        cout<<"(1)petrol (2)diesel (3)C.N.G (4)electric "<<endl<<endl;
        cout<<"ENTER YOUR FUEL PREFERENCE :";
        cin>>fuel;
        cout<<endl;
        cout<<"Modal"<<setw(10)<<"Fuel"<<setw(10)<<"Prize";
        cout<<setw(15)<<"Mileage";
        cout<<setw(15)<<"Transmission";
        cout<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating";
        cout<<setw(15)<<"Airbags"<<endl<<endl;
        for(int i=0 ; i<no_of_car ; i++)
        {
            if(fuel==car[i].fuel_name)
            {
                car[i].putdata();
            }
        }
        break;
    case 3:
        string range;
        cout<<"ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS :";
        cin>>range;
        cout<<endl;
        cout<<"Modal"<<setw(10)<<"Fuel"<<setw(10)<<"Prize";
        cout<<setw(15)<<"Mileage";
        cout<<setw(15)<<"Transmission";
        cout<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating";
        cout<<setw(15)<<"Airbags"<<endl<<endl;
        for(int i=0 ; i<no_of_car ; i++)
        {
            if(car[i].showroom_price>=range)
            {
                car[i].putdata();
            }
        }
        break;
    }
}
