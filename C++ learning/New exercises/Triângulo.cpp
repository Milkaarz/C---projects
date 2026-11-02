#include <iostream>

using namespace std;

int main() {

    double a, b, c;

    cout << "Insira o primeiro lado: ";
    cin >> a;
    cout << "Insira o segundo lado: ";
    cin >> b;
    cout << "Insira o terceiro lado: ";
    cin >> c;

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            cout << "Seu triangulo e equilatero" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Seu triangulo e isosceles" << endl;
        } else {
            cout << "Seu triangulo e escaleno" << endl;
        }
    } else {
        cout << "Nao forma triangulo" << endl;
    }

    return 0;
}