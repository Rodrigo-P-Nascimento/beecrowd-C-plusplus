#include <iostream>

using namespace std;

int main(){

    int quantia, resto, celula;

    cin >> quantia;

    cout << quantia << endl;

    celula = quantia / 100;
    resto = quantia % 100;
    cout << celula <<" nota(s) de R$ 100,00" << endl;

    quantia = resto;
    celula =  quantia / 50;
    resto = quantia % 50;
    cout << celula <<" nota(s) de R$ 50,00" << endl;

    quantia = resto;
    celula =  quantia / 20;
    resto = quantia % 20;
    cout << celula <<" nota(s) de R$ 20,00" << endl;

    quantia = resto;
    celula =  quantia / 10;
    resto = quantia % 10;
    cout << celula <<" nota(s) de R$ 10,00" << endl;

    quantia = resto;
    celula =  quantia / 5;
    resto = quantia % 5;
    cout << celula <<" nota(s) de R$ 5,00" << endl;

    quantia = resto;
    celula =  quantia / 2;
    resto = quantia % 2;
    cout << celula <<" nota(s) de R$ 2,00" << endl;

    quantia = resto;
    celula =  quantia / 1;
    resto = quantia % 1;
    cout << celula <<" nota(s) de R$ 1,00" << endl;

    return 0;
}
