#include <iostream>

using namespace std;    

using Dinheiro = double;

namespace brasil {
    const Dinheiro taxa = 0.10;
}

namespace EUA{
    const Dinheiro taxa = 0.18;
}

int main(){

    Dinheiro valorConta;
    int numPessoas;
    Dinheiro valorGorjeta;
    
    cout << "Digite o valor da conta: ";
    cin >> valorConta;

    cout << "Em quantas pessoas o valor da conta sera dividido? ";
    cin >> numPessoas;

    Dinheiro gorjeta = valorConta * brasil::taxa; 
    Dinheiro gorjeta2 = valorConta * EUA::taxa;
    Dinheiro total = valorConta + gorjeta;
    Dinheiro total2 = valorConta + gorjeta2;
    Dinheiro porPessoa = total / numPessoas;
    Dinheiro porPessoa2 = total2 / numPessoas; 

    cout << "Gorjeta Brasil: " << gorjeta << endl;
    cout << "Gorjeta EUA: " << gorjeta2 << endl;
    cout << "Total com gorjeta Brasil: " << total << endl;
    cout << "Total com gorjeta EUA: " << total2 << endl;
    cout << "Cada pessoa paga brasil: " << porPessoa << endl;
    cout << "Cada pessoa paga EUA: " << porPessoa2 << endl;
    
    return 0;


}