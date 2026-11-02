#include <iostream>

using namespace std;

int main(){

    int num1 = 7, num2 = 2, divisaoInt;
    double divisaoDouble;
    int sobra;
    int nota1 = 7, nota2 = 8, nota3 =  8;

    divisaoInt = num1 / num2;
    divisaoDouble = (double)num1 / num2;
    // Cast antes da divisao: o 7 vira 7.0, entao a divisao ja e feita com double (3.5)
    sobra = num1 % num2;
    double tardio = (double)(num1 / num2); 
    // Cast depois da divisao: 7 / 2 entre int ja deu 3, o cast so transforma 3 em 3.0
    double r = num1 / num2;
    // A divisao entre int acontece antes de guardar no double

    double mediaErrada = (double)((nota1 + nota2 + nota3) / 3);
    double mediaCerta = (double)(nota1 + nota2 + nota3) / 3;

    cout << "Resultado cast cedo: " << divisaoDouble << endl;
    cout << "Divisao Inteira: " << divisaoInt << endl;
    cout << "Sobras: " << sobra << endl;
    cout << "Double tardio: " << tardio << endl;
    cout << "Atribuicao a double: " << r << endl;
    cout << "Media errada: " << mediaErrada << endl;
    cout << "Media correta: " << mediaCerta << endl;
    
    return 0;

}