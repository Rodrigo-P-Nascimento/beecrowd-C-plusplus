#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int dia1, dia2;
    int hora1, hora2, minuto1, minuto2, seg1, seg2;

    scanf("Dia %d\n", &dia1);
    scanf("%d : %d : %d\n", &hora1, &minuto1, &seg1);
    scanf("Dia %d\n", &dia2);
    scanf("%d : %d : %d\n", &hora2, &minuto2, &seg2);

    int dia_final, hora_final, minuto_final, segundo_final;

    dia_final = dia2 - dia1;
    hora_final = hora2 - hora1;
    minuto_final = minuto2 - minuto1;
    segundo_final = seg2 - seg1;

    for(int i =0; i < 10;i++){

        if(hora_final <=0){
            hora_final += 24;
            dia_final--;
        }
        if(minuto_final <=0){
            minuto_final+=60;
            hora_final--;
        }
        if(segundo_final <=0){
            segundo_final += 60;
            minuto_final--;
        }

        if(segundo_final == 60){
            segundo_final = 0;
            minuto_final++;
        }
        if(minuto_final == 60){
            minuto_final = 0;
            hora_final++;
        }
        if(hora_final == 24){
            hora_final = 0;
            dia_final++;
        }
    }
    cout << dia_final << " dia(s)\n";
    cout << hora_final << " hora(s)\n";
    cout << minuto_final << " minuto(s)\n";
    cout << segundo_final << " segundo(s)\n";
    return 0;
}
