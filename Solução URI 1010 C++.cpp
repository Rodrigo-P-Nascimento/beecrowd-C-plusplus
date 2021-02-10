#include <iostream>

using namespace std;

int main(){

    int codigo1, codigo2;
    int quant1, quant2;
    double preco1, preco2;

    cin >> codigo1 >> quant1 >> preco1;
    cin >> codigo2 >> quant2 >> preco2;

    double total = (quant1*preco1) + (quant2*preco2);

    cout.precision(2);
    cout << fixed;

    cout << "TOTAL A PAGAR: R$ " << total << "\n";

    return 0;
}
