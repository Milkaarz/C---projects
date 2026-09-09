#include <iostream>
#include <string>

std::string concatStrings(std::string string1, std::string string2);

int main() {

    std::string firstName = "Sunset";
    std::string lastName = "Shimmer";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName << '\n';
    
    return 0;
}

std::string concatStrings(std::string string1, std::string string2) {
    return string1 + " " + string2;
}