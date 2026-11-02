#include <iostream>

using namespace std;

struct FichaPessoal{
    string nome;
    int idade;
    double altura;
    bool estudante;
};

void ImprimirFicha(FichaPessoal ficha);

int main(){

    FichaPessoal ficha;
    
    cout << "Digite seu nome: ";
    getline(cin, ficha.nome);

    cout << "Digite sua idade: ";
    cin >> ficha.idade;

    cout << "Digite sua altura: ";
    cin >> ficha.altura;

    cout << "É estudante? (1 para sim, 0 para não): ";
    cin >> ficha.estudante;

    ImprimirFicha(ficha);
}

void ImprimirFicha(FichaPessoal ficha){
    cout << "Nome: " << ficha.nome << endl;
    cout << "Idade: " << ficha.idade << endl;
    cout << "Altura: " << ficha.altura << endl;
    cout << "Estudante: " << (ficha.estudante ? "Sim" : "Não") << endl;
}