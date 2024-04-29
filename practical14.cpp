#include <iostream>
#include <string>
using namespace std;

class Literature
{
protected:
    int id;
    string title;

public:
    void getData()
    {
        cout << "ID: ";
        cin >> id;
        cout << "Title: ";
        cin.ignore();
        getline(cin, title);
    }

    void putData() const
    {
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
    }
};

class Eliterature : public virtual Literature
{
private:
    string DOI;

public:
    void DOIgetdata()
    {
        cout << "Enter DOI = ";
        cin >> DOI;
    }

    void Doiputdata() const
    {
        cout << "DOI = " << DOI << endl;
    }
};

class HardBoundLiterature : public virtual Literature
{
private:
    int NumberOfCopy;

public:
    void NumberOfCopyGetdata()
    {
        cout << "Enter the Number of Copies avaliable = ";
        cin >> NumberOfCopy;
    }

    void NumberOfCopyputata() const
    {
        cout << "Number of Copies = " << NumberOfCopy << endl;
    }
};

class Book : public Eliterature, public HardBoundLiterature
{
private:
    int isbn;
    char type;

public:
    void getData()
    {
        cout << "** ADD BOOK DATA **" << endl;
        Literature::getData();
        cout << "ISBN : ";
        cin >> isbn;
        cout << "(E)copy or (H)ardbound : ";
        cin >> type;
        if (type == 'E')
        {
            Eliterature::DOIgetdata();
        }
        else if (type == 'H')
        {
            HardBoundLiterature::NumberOfCopyGetdata();
        }
    }

    void putData() const
    {
        cout << "** LIST ALL BOOKS **" << endl;
        Literature::putData();
        cout << "ISBN: " << isbn << endl;
        cout << "Type: " << type << endl;
        if (type == 'E')
        {
            Eliterature::Doiputdata();
        }
        else if (type == 'H')
        {
            HardBoundLiterature::NumberOfCopyputata();
        }
    }
};

class Magazine : public Eliterature, public HardBoundLiterature
{
private:
    int issn;
    char type;

public:
    void getData()
    {
        cout << "** ADD MAGAZINE DATA **" << endl;
        Literature::getData();
        cout << "ISSN : ";
        cin >> issn;
        cout << "(E)copy or (H)ardbound : ";
        cin >> type;
        if (type == 'E')
        {
            Eliterature::DOIgetdata();
        }
        else if (type == 'H')
        {
            HardBoundLiterature::NumberOfCopyGetdata();
        }
    }

    void putData() const
    {
        cout << "** LIST ALL MAGAZINES **" << endl;
        Literature::putData();
        cout << "ISSN: " << issn << endl;
        cout << "Type: " << type << endl;
        if (type == 'E')
        {
            Eliterature::Doiputdata();
        }
        else if (type == 'H')
        {
            HardBoundLiterature::NumberOfCopyputata();
        }
    }
};

int main()
{
    Book books[5];
    Magazine magazines[5];
    int bookCount = 0, magazineCount = 0;
    char choice;

    do
    {
        int k;
        cout << "1: Add Book Data\n2: Add Magazine Data\n3: List All Books\n4: List All Magazines\n5: Exit\n";
        cout << "Enter your choice: ";
        cin >> k;

        switch (k)
        {
        case 1:
            if (bookCount < 5)
            {
                books[bookCount].getData();
                ++bookCount;
            }
            else
            {
                cout << "Error: Maximum books limit reached." << endl;
            }
            break;
        case 2:
            if (magazineCount < 5)
            {
                magazines[magazineCount].getData();
                ++magazineCount;
            }
            else
            {
                cout << "Error: Maximum magazines limit reached." << endl;
            }
            break;
        case 3:
            for (int i = 0; i < bookCount; ++i)
            {
                books[i].putData();
                cout << endl;
            }
            break;
        case 4:
            for (int i = 0; i < magazineCount; ++i)
            {
                magazines[i].putData();
                cout << endl;
            }
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << "-------------------------------------------------------------" << endl;
        cout << "Enter M to go to the main menu. Press any other key to exit: ";
        cin >> choice;
    } while (choice == 'M' || choice == 'm');

    return 0;
}
