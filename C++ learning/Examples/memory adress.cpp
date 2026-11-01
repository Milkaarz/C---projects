#include <iostream>

using namespace std;

int main(){

        // memory adress = a location in memory where data is stored
        // a memory address can acessed with & (address-of operator)

        string name = "Bro";
        int age = 21;
        bool student = true;

        cout << &name << endl;
        cout << &age << endl;
        cout << &student << endl;

    return 0;
}