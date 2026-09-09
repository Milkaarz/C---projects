#include <iostream>
#include <string>

int main(){

    std::string name;

    //When the condition in While is true the command will repeat infinite times
    while(name.empty()){
        std::cout << "Enter your name";
        std::getline(std::cin, name);
    }

    std::cout << "Hello" << name;
}