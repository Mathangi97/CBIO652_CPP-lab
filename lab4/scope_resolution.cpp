class Base
{
    public:
    int x=20;
 
};

class Derived : public Base
{
    public:
    int x=40;
    void show()
    {
        cout<<"Base class value: "<<Base::x<<"\n";
        cout<<"Derived class value: "<<x;
    }
};
int main()
{
    Derived d;
    d.show();

    return 0;
}