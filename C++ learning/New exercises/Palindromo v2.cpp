#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string texto;
    
    cout << "Insira uma palavra: ";
    getline(cin, texto);  
   
    int inicio = 0;
    int fim = texto.length() - 1;
    bool ehPalindromo = true;    
    
    while (inicio < fim){  
        char esq = tolower(texto[inicio]);
        char dir = tolower(texto[fim]);

        if (esq != dir) {
            ehPalindromo = false;
            break;
        } else {
            inicio++;
            fim--;
        }
    }

    if (ehPalindromo) {
        cout << "E um palindromo" << endl;
    } else {
        cout << "Nao e um palindromo" << endl;
    }

    return 0;
}