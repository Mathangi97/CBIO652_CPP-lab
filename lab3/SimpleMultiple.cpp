
#include <iostream>

using namespace std;
class Undergrad
{
    public:
    void UGdetails()
    {
    cout<<"UG details: \n Course: B.tech Bioinformatics \n University: SASTRA Deemed Univeristy \n \n";
    }
};

class Postgrad
{
    public:
    string course="M.Tech Computational Biology";
    string year="Year I";
    void PGdetails()
    {
    cout<<"PG details: \n Course: M.Tech Computational Biology \n University: Pondicherry University \n\n";
    }

};

class Student : public Undergrad, public Postgrad
{
    public:
    void studentDetails(string name,int num)
    {
        cout<<"Student details: \n Name: "<<name<<"\n"<<" Roll number :"<<num<<"\n\n";
        UGdetails();
        PGdetails();
    }
};

class Subject : public Postgrad
{
    public:
    void details()
    {
    cout<<"Subject details: \n";
    cout<<" Course: "<<course<<"\n Year of study: "<<year<<"\n";
    cout<<" Subjects: C++ programming and JAVA programming";
    }
};
int main()
{
    Student S;
    S.studentDetails("Mathangi",203);
    Subject Sub;
    Sub.details();

    return 0;
}