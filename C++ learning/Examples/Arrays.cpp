#include <iostream>

int main() {
    using namespace std;

    //array = a data structure that can hold multiple values
    //        values are acessed bu an index number
    //        "kind of like variable that holds mutiple values"
    // Agora o array tem tamanho 3
    string cars[3];

    // Atribuição de valores aos diferentes índices (0, 1 e 2)
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    // Exibição dos elementos do array
    cout << cars[0] << '\n';
    cout << cars[1] << '\n';
    cout << cars[2] << '\n';

    return 0;
}