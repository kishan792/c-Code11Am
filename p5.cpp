/*
    if not access modifier is specified class will keep all data member private

    classKeyword ClassName
    {
        AcessModifier:
            data memebers..
    };
*/

#include<iostream>
using namespace std;

class Employee
{
    public:

        string name;
        int sal;
};

int main()
{
    //object creation
    //className objecName
     Employee e1;
     //access the datamember
     //objectName.datamemberName;

     
    e1.name = "Kishan";
    e1.sal = 100;

    cout<<"Employee Name : "<<e1.name<<endl;
    cout<<"Employee Salary : "<<e1.sal<<endl;    
}
