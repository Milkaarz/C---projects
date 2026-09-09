#include <iostream>
#include <string>

int main() {

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << j << "  "; // Usa aspas doplas para a string de espaços
        }
        std::cout << '\n';
    }

    return 0;
}