#include <iostream>
using namespace std;

class product
{
protected:
    int product_id;
    string product_name;
    string product_manufacturer;
    float product_price;

public:
    product(int ProductId, string ProductName, string ProductManufacturer, float ProductPrice)
    {
        product_id = ProductId;
        product_name = ProductName;
        product_manufacturer = ProductManufacturer;
        product_price = ProductPrice;
    }

    virtual void putdata() = 0;
};

class smartwatch : public product
{
protected:
    float dial_size;

public:
    smartwatch(int ProductId, string ProductName, string ProductManufacturer, float ProductPrice, float DialSize) : product(ProductId, ProductName, ProductManufacturer, ProductPrice)
    {
        dial_size = DialSize;
    }

    void putdata()
    {
        cout << "-----------------------------" << endl;
        cout << product_id << " : " << product_name << " : " << product_manufacturer << " : " << product_price << " : " << dial_size << endl;
        cout << "-----------------------------" << endl;
    }
};

class bedsheet : public product
{
protected:
    float product_width;
    float product_height;

public:
    bedsheet(int ProductId, string ProductName, string ProductManufacturer, float ProductPrice, float width, float height) : product(ProductId, ProductName, ProductManufacturer, ProductPrice)
    {
        product_width = width;
        product_height = height;
    }

    void putdata()
    {
        cout << "-----------------------------" << endl;
        cout << product_id << " : " << product_name << " : " << product_manufacturer << " : " << product_price << " : " << product_width << " : " << product_height << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    int k;
    cout << "Enter 1 : smart watch menu" << endl;
    cout << "Enter 2 : bedsheet menu" << endl;
    cout << "Enter your choice : ";
    cin >> k;

    switch (k)
    {
    case 1:
    {
        cout << "** ENTER SMART WATCH DATA **" << endl;
        int id;
        string name, manufacturer;
        float price, dialSize;
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter product Manufacturer: ";
        getline(cin, manufacturer);
        cout << "Enter product Price: ";
        cin >> price;
        cout << "Enter product Dial Size: ";
        cin >> dialSize;

        smartwatch sw(id, name, manufacturer, price, dialSize);
        sw.putdata();
        break;
    }

    case 2:
    {
        cout << "** ENTER BEDSHEET DATA **" << endl;
        int id;
        string name, manufacturer;
        float price, width, height;
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter product Manufacturer: ";
        getline(cin, manufacturer);
        cout << "Enter product Price: ";
        cin >> price;
        cout << "Enter product Width: ";
        cin >> width;
        cout << "Enter product Height: ";
        cin >> height;

        bedsheet bs(id, name, manufacturer, price, width, height);
        bs.putdata();
        break;
    }

    default:
        cout << "INVALID CHOICE!!!" << endl;
    }
    return 0;
}
