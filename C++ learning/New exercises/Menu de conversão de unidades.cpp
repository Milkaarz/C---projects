#include <iostream>

using namespace std;

int main(){

    int opcao;
    double valor, resultado;

    cout << "===  Conversor de unidades ====" << endl;
    cout << " 1 - km para milhas ";
    cout << " 2 - milhas para km ";
    cout << " 3 - kg para libras ";
    cout << " 4 - libras para kg ";
    cout << " 5 - Celsius para Fahrenheit ";
    cout << " 6 - Fahrenheit para Celsius ";

    cout << "Escolha uma opcao: ";
    cin >> opcao; 
    cout << "Digite o valor: ";
    cin >> valor;


 switch (opcao) {
        case 1:
            resultado = valor * 0.621371;
            cout << "Resultado: " << resultado << " milhas" << endl;
            break;
        case 2:
            resultado = valor * 1.609344;
            cout << "Resultado: " << resultado << " km" << endl;
            break;
        case 3:
            resultado = valor * 2.20462;
            cout << "Resultado: " << resultado << " libras" << endl;
            break;
        case 4:
            resultado = valor * 0.453592;
            cout << "Resultado: " << resultado << " kg" << endl;
            break;
        case 5:
            resultado = valor * 9.0 / 5 + 32;
            cout << "Resultado: " << resultado << " F" << endl;
            break;
        case 6:
            resultado = (valor - 32) * 5.0 / 9;
            cout << "Resultado: " << resultado << " C" << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
            break;
    }

    return 0;
}