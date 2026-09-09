#include <iostream>
#include <string> // Incluído para suporte a std::string e std::getline

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Count the numer of the letters
    //if (name.length() > 12) { 
    //    std::cout << "Your name cant be over 12 characteres\n"; 
    //    std::cout << "Welcome " << name << "\n";
    //}

    //empty = if its empty 
    //if(name.empty()){
    //    std::cout << "You didn't enter your name";
    //}
    //else{
    //    std::cout << "Hello " << name;
    //}

    // Clear the name
    //name.clear();
    //std::cout << "Hello " << name;

    //Add the "gmail.com" in the final of the name
    //name.append(@gmail.com);
    //std::cout << "Your username is now" << name

    //Count the letter in the number() position
    //std::cout << name.at(2);

    //Add the character in "" in the front of the caracter in the "number"
    //name.insert(0, "@"); 
    //std::cout << name;

    //Find a character in the phrase
    //std::cout << name.find(' ');

    //Clears the X to Y caracter in the phrase
    //name.erase(0, 3);
    //std::cout << name;

    return 0;
}