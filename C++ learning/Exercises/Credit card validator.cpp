#include <iostream>
#include <string>

using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);


int main()
{

    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number (it must have between 13 and 16 digits): ";
    cin >> cardNumber;

    if(cardNumber.size() < 13 || cardNumber.size() > 16){

        cout << "Invalid length: you entered " << cardNumber.size()
             << " digits, but a card number must have between 13 and 16 digits." << endl;
        return 1;

    }

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);


    if(result % 10 == 0){

        cout << cardNumber << " is valid." << endl;

    } else {

        cout << cardNumber << " is invalid." << endl;

    }

    return 0;

}

int getDigit(const int number){

    return number % 10 + number / 10;
}
int sumOddDigits(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){  
        sum += cardNumber[i] - '0';
    }
    return sum;
}

int sumEvenDigits(const string cardNumber){

    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){

    sum += getDigit((cardNumber[i] - '0') * 2);

    }

        return sum;

}