#include <iostream>
#include <math.h>

using namespace std;

void decrescente(double *a, double *b, double*c);

int main(){

    double a, b, c;
    int flag1=0, flag2=0;
    cin >> a >> b >> c;
    decrescente(&a, &b, &c);

    double aAxu, bAxu, cAxu;

    aAxu = pow(a, 2);
    bAxu = pow(b, 2);
    cAxu = pow(c, 2);

    if(a >= (b+c)){
        cout << "NAO FORMA TRIANGULO\n";
        flag1=1;
    }
    if(flag1 == 0){
        if(aAxu == (bAxu + cAxu)){
            cout <<"TRIANGULO RETANGULO\n";
        }
        if(aAxu > (bAxu + cAxu)){
            cout << "TRIANGULO OBTUSANGULO\n";
        }
        if(aAxu < (bAxu + cAxu)){
            cout <<"TRIANGULO ACUTANGULO\n";
        }
        if(a == b && b == c){
            cout << "TRIANGULO EQUILATERO\n";
            flag2 = 1;
        }
        if((a == b || a == c || b == c) && flag2 == 0){
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}

void decrescente(double *num1, double *num2, double *num3){

    double temp;

    if(*num2 > *num1){
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

    if(*num3 > *num1){
        temp = *num1;
        *num1 = *num3;
        *num3 = temp;
    }

    if(*num3 > *num2){
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }

}
