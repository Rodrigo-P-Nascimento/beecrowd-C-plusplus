#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    double matriz[12][12];
    int i, j;
    double soma;
    char op;

    scanf("%*c", &op);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin >> matriz[i][j];
        }
    }

    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            soma+=matri[i][j];
        }
    }


    return 0;
}
