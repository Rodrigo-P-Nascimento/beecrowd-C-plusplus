#include <iostream>

using namespace std;

int main(){

    double salarioInicial, salarioFinal, porcentagem;
    double vendas;
    string nome;

    cin >> nome;
    cin >> salarioInicial;
    cin >> vendas;

    porcentagem = (vendas*15)/100;
    salarioFinal = salarioInicial+porcentagem;

    cout.precision(2);
    cout << fixed;

    cout << "TOTAL = R$ " << salarioFinal << "\n";

    return 0;
}
