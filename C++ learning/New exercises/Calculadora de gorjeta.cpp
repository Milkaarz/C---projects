#include <iostream> 

using namespace std;

int main(){

    const double taxaGorjeta = 0.10; // 10% de gorjeta

    double valorConta;
    int numPessoas;
    double valorGorjeta;
    
    cout << "Digite o valor da conta: ";
    cin >> valorConta;

    cout << "Em quantas pessoas o valor da conta sera dividido? ";
    cin >> numPessoas;

    double gorjeta = valorConta * taxaGorjeta;
    double total = valorConta + gorjeta;
    double porPessoa = total / numPessoas;

    cout << "Gorjeta: " << gorjeta << endl;
    cout << "Total com gorjeta: " << total << endl;
    cout << "Cada pessoa paga: " << porPessoa << endl;
    
    return 0;

}