#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    const int MAX_TENTATIVAS = 3;

    string senha;
    int tentativas = 0;
    bool temNumero;
    bool aceita = false;

    do {
        cout << "Insira sua senha: ";
        getline(cin, senha);
        tentativas++;

        temNumero = false;
        for (size_t i = 0; i < senha.length(); i++) {
            if (isdigit(senha[i])) {
                temNumero = true;
                break;
            }
        }

        if (senha.length() >= 8 && temNumero) {
            aceita = true;
        } else {
            if (senha.length() < 8) {
                cout << "Senha muito curta! Minimo de 8 caracteres." << endl;
            }
            if (!temNumero) {
                cout << "A senha precisa ter pelo menos um numero." << endl;
            }
        }

    } while (!aceita && tentativas < MAX_TENTATIVAS);

    if (aceita) {
        cout << "Senha aceita apos " << tentativas << " tentativa(s)!" << endl;
    } else {
        cout << "Voce atingiu o limite de tentativas!" << endl;
    }

    return 0;
}