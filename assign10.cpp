// assign10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//define 3 different structures and initialize their members.
//now write 3 different functions, but with the same name.
//these functions will accept each structure respectively and display their members.

#include <iostream>
using namespace std;
struct Student {
    char name[20];
    int age;
};
struct Employee {
    char ename[20];
    int eage;
};
struct Company{
    char c_name[20];
    char location[20];
};
void Disp(Student temp);
void Disp(Employee *temp);
void Disp(Company &temp);

int main()
{
    Student s1;
    strcpy_s(s1.name, "shubham");
    s1.age = 24;
    Employee e1;
    strcpy_s(e1.ename, "ajinkya");
    e1.eage = 25;
    Employee* ptr = &e1;
    Company c1;
    strcpy_s(c1.c_name, "nice");
    strcpy_s(c1.location, "pune");
    Company& ref = c1;


    Disp(s1);
    Disp(ptr);
    Disp(ref);
}
void Disp(Student temp) {
    cout << temp.name << endl << temp.age << endl;
}
void Disp(Employee *temp) {
    cout << (*temp).ename << endl << (*temp).eage << endl;
}
void Disp(Company& temp) {
    cout << temp.c_name << endl << temp.location << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
