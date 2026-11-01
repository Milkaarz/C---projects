#include <iostream>
#include <string>

using namespace std;

int main(){

// pointers = variables that stores a memory address of another variant 
//            sometimes it's easier to work with an adress

// & address-of operator
// * dereference operator

    string name = "Bro";
    int age = 21;
    string freePizzas[5] = {"Cheese", "Pepperoni", "Hawaiian", "Veggie", "Meat Lovers"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas; // points to the first element of the array
    string *p2Pizzas = &freePizzas[1]; // points to the second element of the array
    
    cout << *pName << endl; // prints the value of name
    cout << *pAge << endl; // prints the value of age
    cout << *pFreePizzas << endl; // prints the first element of the array
    cout << *p2Pizzas << endl; // prints the second element of the array

    return 0;

}