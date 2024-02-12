#include<iostream>
using namespace std;
class area
{
   private:
       float radius,height,width,depth,area_1;
       //float pi=3.14;
   public:
    void getdata()
    {
        cout<<"Enter the radius of circle :";
        fflush(stdin);
        cin>>radius;
        AREA(radius);
        cout<<"The area of a circle is :"<<area_1<<endl;
        cout<<"Enter the height of rectangle :";
        fflush(stdin);
        cin>>height;
        cout<<"Enter the width of rectangle :";
        fflush(stdin);
        cin>>width;
        AREA(height,width);
        cout<<"The area of a rectangle is :"<<area_1<<endl;
        cout<<"Enter the height of cuboid :";
        fflush(stdin);
        cin>>height;
        cout<<"Enter the width of cuboid :";
        fflush(stdin);
        cin>>width;
        cout<<"Enter the depth of cuboid :";
        fflush(stdin);
        cin>>depth;
        AREA(height,width,depth);
        cout<<"The area of a cuboid is :"<<area_1;
    }
    void AREA(float r)
    {
        area_1=3.14*r*r;
    }
    void AREA(float h , float w)
    {
        area_1=h*w;
    }
    void AREA(float h , float w , float d)
    {
        area_1=(h*w)+(w*d)+(d*h);
    }

};
int main()
{
    class area x;

    x.getdata();
    return 0;
}
