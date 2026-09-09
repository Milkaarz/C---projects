#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(0));
    int randomNum = rand() % 5 + 1;

    switch (randomNum) {
        case 1: 
            std::cout << "You win a bumper sticker!\n"; // Ponto e vírgula adicionado
            break;
        case 2: 
            std::cout << "You win a t-shirt!\n";
            break;
        case 3: 
            std::cout << "You win a pair of pants!\n";
            break;
        case 4: 
            std::cout << "You win a sock!\n";
            break;
        case 5: 
            std::cout << "You win a rose!\n";
            break;
        default:
            std::cout << "Invalid prize.\n";
            break;
    }

    return 0;
}