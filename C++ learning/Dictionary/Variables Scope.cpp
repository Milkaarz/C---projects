#include <iostream>

int myNum = 3;

void printNum(int myNum);

int main() {
    // Local variables = declared inside a function or block {}
    // Global Variables = declared outside of all functions 
    
    printNum(myNum);
    std::cout << myNum << "\n";
    
    int myNum = 1;

    std::cout << myNum << "\n";

    return 0; 
}

void printNum(int myNum) {
    std::cout << myNum << "\n";
}  