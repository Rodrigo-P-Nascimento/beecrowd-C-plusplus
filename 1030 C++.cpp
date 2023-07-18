#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int numTestes, numPessoas, numSaltos, ultimoVivo;
    int i,j;

    cin >> numTestes;
    for(i=0; i < numTestes;i++){
        ultimoVivo=0;

        cin >> numPessoas >> numSaltos;

        int contSaltos = numSaltos;
        int pessoas[numPessoas];
        int mortes = numPessoas;

        for(j=1; j <= numPessoas ; j++){
            pessoas[j-1] = j;
        }

        while(ultimoVivo == 0){

            for(int h=0; h < numPessoas;h++){
                if(pessoas[h] != 0){
                    if(contSaltos > 0){
                        contSaltos--;
                    }
                    if(contSaltos == 0){
                        pessoas[h] = 0;
                        mortes--;
                        contSaltos = numSaltos;
                    }
                    if(mortes == 1){
                        ultimoVivo= pessoas[h];
                        break;
                    }
                }

            }

        }
        printf("Case %d: %d\n",i+1 ,ultimoVivo);
    }

    return 0;
}
