#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int cls;
    char section;
    int roll;

    Student(char* n, int c, char s, int r){
        strcpy(name, n);
        cls = c;
        section = s;
        roll = r;
    }
};

int main()
{
    Student s1("Ittehad Abdullah Zumar", 4, 'R', 201153530);

    Student s2("Mustakim Islam Alif", 5, 'I', 201153224);

    cout << "Name: " << s1.name << ",Class: " << s1.cls << ",Section: " << s1.section << ",Roll: " << s1.roll <<endl;

    cout << "Name: " << s2.name << ",Class: " << s2.cls << ",Section: " << s2.section << ",Roll: " << s2.roll <<endl;

    return 0;
}