#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    double vetor[100];
    double num;

    cin >> num;
    vetor[0] = num;

    for(int i=1;i < 100;i++){
        vetor[i] = num/2;
        num/=2;
    }
    for(int i=0; i < 100;i++){
        printf("N[%d] = %.4f\n", i, vetor[i]);
    }
    return 0;
}
