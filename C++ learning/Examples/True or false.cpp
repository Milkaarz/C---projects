#include <iostream>
#include <string>

int main(){

    //if statements = do something if a condition is true
    //                     if not, don't do it

    int age;
    
    std::cout << "Enter your age:";
    std::cin >> age;

    if (age >= 100){
        std::cout << "You are a century old!\n";
    }
    else if(age >= 18){
        std::cout << "You are an adult!\n";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!\n";
    }
    else {
        std::cout << "You are not an adult!\n";
    }

    return 0;

}