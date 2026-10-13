#include <iostream>
#include <string>

using namespace std;

int main(){

    //sizeof() = determinas the size in bytes of a:
    //    variable, data type, class, objects, etc.

    string name = "Bro Code";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    cout << sizeof(students)/sizeof(string) << " elements\n";

    return 0;

}