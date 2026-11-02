#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n <= 1) {            // caso base
        return 1;
    }
    return n * fatorial(n - 1);  // caso recursivo
}

int main() {
    cout << fatorial(5) << endl;  // 120
}