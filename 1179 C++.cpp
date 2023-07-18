#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int vetor_par[5];
    int vetor_impar[5];
    int num, cont_par=0, cont_impar=0;
    int aux1=0, aux2=0;

    for(int i=0; i < 15; i++){
        cin >> num;

        if(num%2 == 0){
            if(cont_par < 5){
                vetor_par[cont_par] = num;
                cont_par++;
                aux1++;
            }
            if(cont_par == 5){
                cont_par = 0;
                for(int j=0; j < 5;j++){
                    printf("par[%d] = %d\n", j, vetor_par[j]);
                }

            }
        }else{
            if(cont_impar < 5){
                vetor_impar[cont_impar] = num;
                cont_impar++;
                aux2++;
            }
            if(cont_impar == 5){
                cont_impar = 0;
                for(int j=0; j < 5;j++){
                    printf("impar[%d] = %d\n", j, vetor_impar[j]);
                }
            }
        }
    }

    for(int i=0; i < (aux2-5);i++){
         printf("impar[%d] = %d\n", i, vetor_impar[i]);
    }
    for(int i=0; i < (aux1-5);i++){
         printf("par[%d] = %d\n", i, vetor_par[i]);
    }

    return 0;
}
