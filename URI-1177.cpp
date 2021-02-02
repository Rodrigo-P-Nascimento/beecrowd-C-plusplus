#include <iostream>
#include <stdio.h>
#define TAM 1000

using namespace std;

int main(){

    int N[TAM];
    int T, cont=0, i;

    cin >> T;

    for(i=0; i < TAM;i++){
        if(cont < T){
            N[i] = cont;
            cont++;
        }else{
            cont =0;
            N[i] = cont;
            cont++;
        }
    }
    for(i=0; i< TAM;i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
