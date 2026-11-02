#include <iostream>
#include <string>

using namespace std;

int main(){

    string email;
    cout << "Digite o e-mail: ";
    cin >> email;
    
    size_t posArroba = email.find('@');
    size_t posPonto = email.find('.', posPonto);

    if (posArroba == string::npos){
        cout << "Invalido: nao tem @" << endl;
    } else {
        if (posPonto == string::npos){
            cout << "Invalido: nao tem . depois do @" << endl;
        } else {
            cout << "Valido" << endl;
        }
         
    }

    return 0;

}