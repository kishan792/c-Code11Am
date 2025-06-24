#include<iostream>
using namespace std;

class Employee
{   
    int sal;

    public:
        string name;
        int age;

        void setSalary(int s);

        int getSalary()
        {
            return sal;
        }
        
       
};

void Employee::setSalary(int s)
{
    sal = s;
}



int main()
{
    //object creation
    Employee e1;

    cout<<"Enter the name of Employee 1"<<endl;
    cin>>e1.name;

    cout<<"Enter the age of Employee 1"<<endl;
    cin>>e1.age;

    int s;
   cout<<"Enter the sal of Employee 1"<<endl;
   cin>>s;

   e1.setSalary(s);

   cout<<"Name of employee 1 : "<<e1.name<<endl;
   cout<<"Age of employee 1 : "<<e1.age<<endl;
   cout<<"Salary of employee 1 : "<<e1.getSalary()<<endl;


    Employee e2;

    cout<<"Enter the name of Employee 2"<<endl;
    cin>>e2.name;

    cout<<"Enter the age of Employee 2"<<endl;
    cin>>e2.age;

    s;
   cout<<"Enter the sal of Employee 2"<<endl;
   cin>>s;

   e2.setSalary(s);

   cout<<"Name of employee 2 : "<<e2.name<<endl;
   cout<<"Age of employee 2 : "<<e2.age<<endl;
   cout<<"Salary of employee 2 : "<<e2.getSalary()<<endl;
    
    
    
}