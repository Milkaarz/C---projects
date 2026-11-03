#include <iostream>

using namespace std;

int main() {

    int numero;
    int soma = 0;
    int quantidade = 0;

    do {
        cout << "Digite um numero (0 para sair): ";
        cin >> numero;

        if (numero != 0) {
            soma += numero;
            quantidade++;
        }

    } while (numero != 0);

    if (quantidade == 0) {
        cout << "Nenhum numero foi digitado." << endl;
    } else {
        double media = (double)soma / quantidade;

        cout << "Quantidade: " << quantidade << endl;
        cout << "Soma: " << soma << endl;
        cout << "Media: " << media << endl;
    }

    return 0;
}