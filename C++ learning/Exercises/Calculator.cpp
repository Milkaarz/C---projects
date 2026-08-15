#include <iostream>


int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************** CALCULATOR **************\n";
    
    std::cout << "Enter operator either + or - or * or /: ";
    std::cin >> op;
    
    std::cout << "Enter the first number:";
    std::cin >> num1;

    std::cout << "Enter the second number:";
    std::cin >> num2;


    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << result;
            break;
        default:
            std::cout << "Error! operator is not correct";
            return 1; // End the program if the operator is invalid

    return 0;   

}