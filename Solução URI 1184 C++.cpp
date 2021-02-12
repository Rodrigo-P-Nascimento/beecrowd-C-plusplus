#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    double matriz[12][12];
    int i, j;
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

    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            soma+=matriz[i][j];
        }
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
