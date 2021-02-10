#include <iostream>

using namespace std;

int main(){

    int flag=1, flag2, flag3;
    double nota1, nota2;
    double media;

    cout.precision(2);
    cout << fixed;

    while(flag == 1){
        flag2=1;
        flag3=1;

        while(flag2 == 1){
            cin >> nota1;
            if(nota1 < 0.0 || nota1 > 10.0){
                cout << "nota invalida\n";
            }else{
                flag2 = 0;
            }

        }
        while(flag3 == 1){
            cin >> nota2;
            if(nota2 < 0.0 || nota2 > 10.0){
                cout << "nota invalida\n";
            }else{
                flag3 = 0;
            }

        }
        media = (nota1 + nota2) /2;
        cout << "media = " << media << endl;

        while(1){
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> flag;
            if(flag == 1 || flag == 2){
                break;
            }
        }

    }
    return 0;
}
