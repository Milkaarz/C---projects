#include <iostream>
#include <string>

void happyBirthday(std::string name, int age) {
    std::cout << "Happy birthday to " << name << "!\n";
    std::cout << "Happy birthday to " << name << "!\n";
    std::cout << "Happy birthday to " << name << "!\n";
    std::cout << "You are " << age << "years old!\n";
}

int main() {
    
    // function = a block of reusable code
    int age = 21;

    std::string name = "Hello";

    happyBirthday(name, age);

    return 0;
}