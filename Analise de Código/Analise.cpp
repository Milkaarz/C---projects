#include <iostream>
#include <vector>

using namespace std;

const int POLTRONAS_POR_FILEIRA = 4;

void exibirOcupacao(const vector<vector<int>>& matrizAssentos, int totalLugares) {
    cout << "\n--- MAPA DE OCUPACAO DO ONIBUS ---\n";
    int assentoAtual = 1;
    int totalFileiras = matrizAssentos.size();

    for (int i = 0; i < totalFileiras; i++) {
        for (int j = 0; j < POLTRONAS_POR_FILEIRA; j++) {
            if (assentoAtual <= totalLugares) {
                cout << matrizAssentos[i][j] << " ";
            } else {
                cout << "  ";
            }

            if (j == 1) {
                cout << "  "; // Espaço para o corredor do ônibus
            }
            
            assentoAtual++;
        }
        cout << "\n";
    }

    cout << "------------------------------\n";
}

int main() {
    int totalLugares;
    double valorPassagem, ValorMinimoPartida;
    
    cout << "=== SISTEMA DE VENDA DE PASSAGENS ===\n";
    cout << "Informe a quantidade total de lugares no onibus: ";
    cin >> totalLugares;

    cout << "Informe o valor da passagem: R$ ";
    cin >> valorPassagem;

    cout << "Informe o valor minimo necessario para a partida: R$ ";
    cin >> ValorMinimoPartida;

    int totalFileiras = (totalLugares + POLTRONAS_POR_FILEIRA - 1) / POLTRONAS_POR_FILEIRA;

    vector<vector<int>> matrizAssentos(totalFileiras, vector<int>(POLTRONAS_POR_FILEIRA, 0));
    int lugaresOcupados = 0;
    int opcao = 1;

    while (opcao != 0) {
        exibirOcupacao(matrizAssentos, totalLugares);

        cout << "\n--- MENU ---\n";
        cout << "1. Comprar passagem\n";
        cout << "0. Sair / Finalizar\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            int fileira, poltrona;

            cout << "Informe a fileira desejada (1 a " << totalFileiras << "): ";
            cin >> fileira;
            cout << "Informe a poltrona desejada (1 a " << POLTRONAS_POR_FILEIRA << "): ";
            cin >> poltrona;

            if (fileira < 1 || fileira > totalFileiras || poltrona < 1 || poltrona > POLTRONAS_POR_FILEIRA) {
                cout << "\n[ERRO] Fileira ou poltrona invalida!\n";
                continue;
            }

            int f = fileira - 1;
            int p = poltrona - 1;

            if ((f * POLTRONAS_POR_FILEIRA + p + 1) > totalLugares) {
                cout << "\n[ERRO] Assento inexistente no onibus!\n";
                continue;
            }
        
            if (matrizAssentos[f][p] == 8) {
                cout << "\n[AVISO] Assento indisponivel! Lugar ja ocupado.\n";
            } else {
                matrizAssentos[f][p] = 8; // Marca o assento como ocupado (8)
                lugaresOcupados++;
                cout << "\n[SUCESSO] Venda realizada com sucesso!\n";
            }
        
            int lugaresDesocupados = totalLugares - lugaresOcupados;
            int percentualOcupacao = (lugaresOcupados * 100) / totalLugares;
            double valorTotalVendido = lugaresOcupados * valorPassagem;

            cout << "\n--- RELATORIO PARCIAL ---\n";
            cout << "Lugares Ocupados: " << lugaresOcupados << "\n";
            cout << "Lugares Livres: " << lugaresDesocupados << "\n";
            cout << "Taxa de Ocupacao: " << percentualOcupacao << "%\n";
            cout << "Total Arrecadado: R$ " << valorTotalVendido << "\n";
        }
    }

    double valorFinalVendido = lugaresOcupados * valorPassagem;
    cout << "\n====================================\n";
    cout << "Valor arrecadado: R$ " << valorFinalVendido << "\n";
    cout << "Valor minimo necessario: R$ " << ValorMinimoPartida << "\n";

    if (valorFinalVendido >= ValorMinimoPartida) {
        cout << "STATUS: O onibus pode partir!\n";
    } else {
        cout << "STATUS: O onibus NAO pode partir (meta de arrecadacao nao atingida).\n";
    }
    cout << "====================================\n";

    return 0;
}