#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    double matriz[12][12];
    int i, j, cont=11;
    double soma=0;
    char op;

    cout.precision(1);
    cout << fixed;

    scanf("%c", &op);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin >> matriz[i][j];
        }
    }

    for(i=1;i<=11;i++){
        for(j=11;j>=cont;j--){
            soma+=matriz[i][j];
        }
        cont--;
    }
    if(op == 'S'){
        cout << soma << endl;
    }
    if(op == 'M'){
        soma = soma / 66.0;
        cout << soma << endl;
    }

    return 0;
}
