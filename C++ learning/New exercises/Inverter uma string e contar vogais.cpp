#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string texto;
    string invertido;
    int vogais = 0;

    cout << "Insira um texto: " << endl;
    getline(cin, texto);

    for (int i = texto.length() - 1; i >= 0; i--) {
        invertido += texto[i];
    } 
    
    for (size_t i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }

         cout << "Invertido: " << invertido << endl;
        cout << "Vogais: " << vogais << endl;

        return 0;
    }
}