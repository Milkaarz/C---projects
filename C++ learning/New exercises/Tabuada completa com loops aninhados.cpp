#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    for (int linha = 1; linha <= 10; linha++) {

        for (int coluna = 1; coluna <= 10; coluna++) {
            cout << setw(4) << linha * coluna;
        }

        cout << endl;  
    }

    return 0;
}