#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a, b, c;

    cout << "Insira a: " << endl;
    cin >> a;

    cout << "Insira b: " << endl;
    cin >> b;

    cout << "Insira c: " << endl;
    cin >> c;

    if (a == 0) {
    cout << "Nao e uma equacao de 2o grau (a nao pode ser 0)" << endl;
    return 0;
}

    double delta = pow(b, 2) - 4 * a * c;
    
    if (delta > 0) {
     double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "x = " << x << endl;
    } else {
        cout << "Nao ha raizes reais" << endl;
}

    return 0;
}


