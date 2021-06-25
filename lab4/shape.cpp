
#include <iostream>

using namespace std;
class Shape
{
    public:
    int len,breadth,height;
    void getData()
    {
        cout<<"Enter length: ";
        cin>>len;
        cout<<"Enter breadth: ";
        cin>>breadth;
        cout<<"Enter height: ";
        cin>>height;
    }
};
class Square : public Shape
{
    public:
    double value;
    void area(int len)
    {
        value=len*len;
        
    }
    void display()
    {
        cout<<"Area of square is :"<<value<<"\n";
    }
};
class Cube : public Shape
{
    public:
    double value;
    void area(int len)
    {
        value=6*(len*len);
        
    }
    void display()
    {
        cout<<"Area of cube is :"<<value<<"\n";
    }
};
class Rectangle : public Shape
{
    public:
    double value;
    void area(int len,int breadth)
    {
        value=(len*breadth);
        
    }
    void display()
    {
        cout<<"Area of rectangle is :"<<value<<"\n";
    }
};
class Triangle : public Shape
{
    public:
    double value;
    void area(int breadth,int height)
    {
        value=0.5*(breadth*height);
        
    }
    void display()
    {
        cout<<"Area of triangle is :"<<value<<"\n";
    }
};

int main()
{
    Shape S;
    S.getData();
    Square Sq;
    Sq.area(S.len);
    Sq.display();
    Cube C;
    C.area(S.len);
    C.display();
    Rectangle R;
    R.area(S.len,S.breadth);
    R.display();
    Triangle T;
    T.area(S.breadth,S.height);
    T.display();
    
    

    return 0;
}