#include <iostream>

// Defined two custom namespaces to prevent name collisions
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // --- SECTION 1: NAMESPACES ---
    int x = 0; // Local variable

    // Access 'x' inside the 'second' namespace directly
    std::cout << "second::x = " << second::x << std::endl; // Prints 2

    using namespace first;
    // Local 'x' has priority over 'first::x', so this prints 0
    std::cout << "Local x = " << x << std::endl; 
    
    // To explicitly get 'x' from 'first', use first::x
    std::cout << "first::x = " << first::x << std::endl; // Prints 1


    // --- SECTION 2: ARITHMETIC OPERATORS ---
    int students = 20;

    // Compound assignment shortcuts:
    students += 1; // 20 + 1 = 21
    students -= 1; // 21 - 1 = 20
    students *= 2; // 20 * 2 = 40
    students /= 2; // 40 / 2 = 20
    students %= 2; // Remainder of 20 / 2 = 0

    std::cout << "Final students count = " << students << std::endl; // Prints 0


    //type conversion = conversion a value of one data type to another
    // implicit = automatic
    // explicit = precede a value with a new data type

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello" << name;
    

    return 0;
}