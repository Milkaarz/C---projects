#include <iostream>
#include <string>

using namespace std;

int main(){

   int numero = 0;
   int numeros = 0;
   int quantidade = 0;
   int media = 0;
    
   do{
        cout << "Digite um numero: ";
        cin >> numero;
        numeros += numero;
        quantidade++;

    } while (numero != 0);

    media = numeros / quantidade;

    cout << "Quantidade: " << quantidade << endl;
    cout << "Soma: " << numeros << endl;
    cout << "Media: " << media << endl;


}