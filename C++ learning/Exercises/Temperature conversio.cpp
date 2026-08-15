#include <iostream>


int main(){

    double temp;
    char unit;

    std::cout << "F = Fahrenheit, C = Celsius\n";
    std::cout << "What unit would you like to convert to? ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << temp << " degrees Fahrenheit";

    } else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << temp << " degrees Celsius";

    } else {
        std::cout << "Invalid unit";
    }


    return 0;
}