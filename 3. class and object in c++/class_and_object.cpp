#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student s1;
    s1.roll = 201153530;
    s1.cls = 4;
    s1.section = 'R';
    char nm1[100] = "Ittehad Abdullah Zumar";
    strcpy(s1.name, nm1);

    Student s2;
    s2.roll = 201153224;
    s2.cls = 5;
    s2.section = 'I';
    char nm2[100] = "Mustakim Islam Alif";
    strcpy(s2.name, nm2);

    cout << "Name: " << s1.name << ",Class: " << s1.cls << ",Section: " << s1.section << ",Roll: " <<  s1.roll;
    return 0;
}