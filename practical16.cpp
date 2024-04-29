
#include <iomanip>
#include <iostream>
#include <string>
#include<sstream>
#include <fstream>
using namespace std;
class Car_deail{
private:
    string model_Name;
    string fuel_Type;
    float showroom_Price;
    float mileage;
    string transmission;
    float tank_Capacity;
    int seating;
    string airbags;
public:
    void getdata(ifstream &file)
    {
        getline(file,model_Name,',');
        getline(file,fuel_Type,',');
        file >> showroom_Price;
        file.ignore();
        file >> mileage;
        file.ignore();
        getline(file,transmission,',');
        file >> tank_Capacity;
        file.ignore();
        file >> seating;
        file.ignore();
        getline(file,airbags,';');
    }
    void putdata() {
        cout<<model_Name<<setw(5)<<" "<<setw(-15)<<fuel_Type<<setw(5)<<" "<<setw(-15)<< showroom_Price <<setw(10)<<" "<<setw(-15)<<mileage<<setw(10)<<" "<<setw(-15)<<transmission<<setw(10)<<" "<<setw(-15)<<tank_Capacity<<setw(19)<<" "<<setw(-15)<<seating<<setw(15)<<airbags<<endl;

    }
    float getshowroom_Price(){
        return showroom_Price;
    }

    string getfuel_Type(){
        return fuel_Type;
    }

    string getmodel_Name(){
        return model_Name;
    }
};

int main() {
    Car_deail car[7];
    int i;
    int option1,option2;
    ifstream fin;
    fin.open("cardata.txt");
    for(int i=0;i<7;++i)
    {
        car[i].getdata(fin);
    }
    system("CLS");

    cout << "WELCOME TO TATA MOTORS" << endl;
    cout << "GET THE CAR AS PER YOUR PREFRENCE" << endl;
    cout << "(1) Model Name (2) Fuel type (3) Price range"<< endl;
    cout << "ENTER YOUR OPTION : ";
    cin >> option1;
    cout << "-----------------------------"<< endl;

    fflush(stdin);

    switch (option1) {
        case 1: {
            cout << "LIST OF TATA CARS" << endl;

            for(i=0;i<7;i++)
            {
                cout << "(" << i+1 << ") " << car[i].getmodel_Name() << "\t" ;
            }

            cout << endl << "CHOOSE YOUR CAR TO GET DETAILS : ";

            cin >> option2;
            option2=option2-1;

            cout<<"Model"<<setw(10)<<"Fuel"<<setw(10)<<"Price"<<setw(15)<<"Mileage"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating"<<setw(15)<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<"(Lakhs)"<<setw(10)<<"km/L"<<setw(20)<<" "<<"(Liters)"<<setw(21)<<"Capacity"<<endl;

            car[option2].putdata();

            }
            break;

        case 2: {

            cout<<"TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS"<<endl<<"(1) Petrol (2) Diesel (3) CNG (4) Electric " << endl;
            cout<<"ENTER YOUR FUEL PREFRENCE : ";
            cin>>option2;

            cout<<"Model"<<setw(10)<<"Fuel"<<setw(10)<<"Price"<<setw(15)<<"Mileage"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating"<<setw(15)<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<"(Lakhs)"<<setw(10)<<"km/L"<<setw(20)<<" "<<"(Liters)"<<setw(21)<<"Capacity"<<endl;

            switch(option2)
            {
                case 1:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuel_Type().compare("Petrol")==0)
                            {
                                car[i].putdata();
                            }


                        }
                        break;
                    }
                case 2:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuel_Type().compare("Diesel")==0)
                            {
                                car[i].putdata();
                            }

                        }
                        break;
                    }
                case 3:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuel_Type().compare("CNG")==0)
                            {
                                car[i].putdata();
                            }

                        }
                        break;
                    }
                case 4:
                    {
                        for(i=0;i<7;i++)
                        {
                            if(car[i].getfuel_Type().compare("electric")==0)
                            {
                                car[i].putdata();
                            }
                        }
                        break;
                    }
            }

            break;
        }
        case 3: {
            float price_Range;
            cout << "ENTER YOUR MAXIMUM AFFORDABLE PRICE RANGE IN LAKHS : ";
            cin >> price_Range;

            cout<<"Model"<<setw(10)<<"Fuel"<<setw(10)<<"Price"<<setw(15)<<"Mileage"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(15)<<"Seating"<<setw(15)<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<"(Lakhs)"<<setw(10)<<"km/L"<<setw(20)<<" "<<"(Liters)"<<setw(21)<<"Capacity"<<endl;

            for(i=0;i<7;i++)
                    {
                        if(car[i].getshowroom_Price() <= price_Range)
                        {
                            car[i].putdata();
                        }

                    }
            break;
        }
        default:
            cout << "Invalid option!" << endl;
    }

    return 0;
}

