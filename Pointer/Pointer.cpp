#include<iostream>
using namespace std;

int main()
{
    int age = 20;
    double cgpa = 3.33;
    string name = "Gunther";

    cout << "Age :" << &age << endl;
    cout << "CGPA :" << &cgpa << endl;
    cout << "Name :" << &name << endl;

    int *pAge = &age;
    double *pCgpa = &cgpa;
    string *pName = &name;

    cout << *pAge; << endl;//value of the memory address it was storing - dereferencing
    cout << *&age; << endl;

    return 0;
}
