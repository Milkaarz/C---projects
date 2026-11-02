#include <iostream>

using namespace std;

int main(){

    int ano;

    cout << "Informe um ano: ";
    cin >> ano;

    if ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0)){
        cout << "Ele e bissexto" << endl;
    } else {
        cout << "Nao e bissexto" << endl;
    }

    bool ehBissexto = ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0));
    cout << (ehBissexto ? "Bissexto" : "Nao bissexto") << endl;



    return 0;
}