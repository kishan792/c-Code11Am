#include<iostream>
using namespace std;

class Animal
{
    public:

    string name;
    int age;
};

int main()
{
    Animal cat;
    Animal *ptr = &cat;
    cat.name = "Tom";
    cat.age = 3;

    cout<<"Cat Name : "<<ptr->name<<endl;
    cout<<"Cat age : "<<ptr->age<<endl;
}