#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Tamanho: ";
    cin >> n;

    cout << endl << "Quadrado:" << endl;
    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= n; coluna++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "Triangulo:" << endl;
    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "Triangulo invertido:" << endl;
    for (int linha = n; linha >= 1; linha--) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}