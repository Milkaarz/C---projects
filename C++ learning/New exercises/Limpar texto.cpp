#include <iostream>
#include <string>

using namespace std;

int main(){

    string frase;
    int palavras = 0;
    bool dentroDePalavra = false;

    cout << "Digite uma frase com espacos: ";
    getline (cin, frase);
    
    for (size_t i = 0; i < frase.length(); i++) {
        if (frase[i] != ' ' && !dentroDePalavra) {
            palavras++;
            dentroDePalavra = true;
        } else if (frase[i] == ' ') {
            dentroDePalavra = false;
        }
   
    }

    size_t i = 0;
    while(i < frase.length()){
        if (frase[i] == ' '){
            frase.erase(i, 1);
        } else {
            i++;
        }
    }
        cout << "Palavras: " << palavras << endl;
        cout << "Sem espacos: " << frase << endl; 

    return 0;

}

