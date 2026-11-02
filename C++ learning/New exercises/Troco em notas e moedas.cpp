#include <iostream> 

using namespace std;

int main(){

    int valorCompra, valorPago;

    cout << "Informe o valor da compra: ";
    cin >> valorCompra;

    cout << "Informe o valor pago: ";
    cin >> valorPago;

    int troco = valorPago - valorCompra;

    int notas100 = troco / 100;
    troco = troco % 100;
    int notas50 = troco / 50;
    troco = troco % 50;
    int notas20 = troco / 20;
    troco = troco % 20;
    int notas10 = troco / 10;
    troco = troco % 10;
    int notas5 = troco / 5;
    troco = troco % 5;
    int notas2 = troco / 2;
    troco = troco % 2;
    int notas1 = troco / 1;
    troco = troco % 1;

    cout << "Notas de 100: " << notas100 << endl;
    cout << "Notas de 50: " << notas50 << endl;
    cout << "Notas de 20: " << notas20 << endl;
    cout << "Notas de 10: " << notas10 << endl;
    cout << "Notas de 5: " << notas5 << endl;
    cout << "Notas de 2: " << notas2 << endl;
    cout << "Moedas de 1: " << notas1 << endl;

    return 0;

}

