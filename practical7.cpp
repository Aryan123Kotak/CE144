#include<iostream>
using namespace std;
class complex_num
{
    float real;
    float imaginary ;
public:
    void getdata()
    {
        cout<<"Enter Real Part : ";
        cin>>real;
        cout<<"Enter Imaginary Part : ";
        cin>>imaginary;
    }
    void putdata()
    {
        if(imaginary>0)
        {
             cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        else
        {
             cout<<real<<imaginary<<"i"<<endl;
        }
    }
    complex_num operator+(complex_num &a)
    {
        complex_num Sum;
        Sum.real = real + a.real;
        Sum.imaginary = imaginary + a.imaginary;
        return Sum;
    }
    complex_num operator-(complex_num &a)
    {
        complex_num Sub;
        Sub.real = real - a.real;
        Sub.imaginary = imaginary - a.imaginary;
        return Sub;
    }
    complex_num operator*(complex_num &a)
    {
        complex_num mul;
        mul.real = real * a.real - imaginary * a.imaginary;
        mul.imaginary = real * a.imaginary + imaginary * a.real;
        return mul;
    }
    complex_num operator/(complex_num &a)
    {
        complex_num div;
        div.real =(real * a.real + imaginary * a.imaginary)/(a.real*a.real + a.imaginary*a.imaginary);
        div.imaginary =(imaginary * a.real - real * a.imaginary)/(a.real*a.real+a.imaginary*a.imaginary);
        return div;
    }
    complex_num operator!()
    {
       complex_num rev;
       rev.real = -real;
       rev.imaginary = -imaginary ;
       return rev;
    }
};
int main()
{
    char choice;
    complex_num X,Y,Z;
    X.getdata();
    Y.getdata();
    cout<<"Choose Operation"<<endl<<"(+) addition "<<endl<<"(-) subtraction "<<endl<<"(*) multiplication "<<endl<<"(/) Division "<<endl<<"(!) negation"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    switch(choice)
    {
    case '+':
        Z=X+Y;
        break;
    case '-':
        Z=X-Y;
        break;
    case '*':
        Z=X*Y;
        break;
    case '/' :
        Z=X/Y;
        break;
    case '!':
        {
           Z=!X ;
           Z.putdata();
           Z=!Y;
        }
    }
    Z.putdata();
}
