#include <iostream>
#include <stdio.h>

int main(){

    int numFunc, horaTrab;
    float valorHora, salario;

    scanf("%d %d %f", &numFunc, &horaTrab, &valorHora);
    salario = valorHora * horaTrab;

    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
