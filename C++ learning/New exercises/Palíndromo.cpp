#include <iostream>
#include <string>

using namespace std;

int main(){

    string texto;
    string invertido;

    cout << "Insire uma palavra: ";
    getline(cin, texto);

    for (int i = texto.length() - 1; i >= 0; i--) {
         invertido += texto[i];
    }
        if (invertido == texto){
            cout << "E um palindromo";
        } else {
            cout << "Nao e um palindromo";
        }

        return 0;
    }
