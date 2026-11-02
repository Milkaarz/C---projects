#include <iostream> 

using namespace std;

int main(){

    double altura, peso;

    cout << "Insira a altura: ";
    cin >> altura;

    cout << "Insira o peso: ";
    cin >> peso;

    double IMC = peso / (altura * altura);
    
     cout << "IMC: " << IMC << endl;

    if (IMC < 18.5) {
        cout << "Abaixo do peso" << endl;
    } else if (IMC < 25) {
        cout << "Peso normal" << endl;
    } else if (IMC < 30) {
        cout << "Sobrepeso" << endl;
    } else if (IMC < 35) {
        cout << "Obesidade grau 1" << endl;
    } else if (IMC < 40) {
        cout << "Obesidade grau 2" << endl;
    } else {
        cout << "Obesidade grau 3" << endl;
    }
    
    return 0;
}