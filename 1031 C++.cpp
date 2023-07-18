#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main(){
    int n, k, m, a, b, contador;
    int horario, anti_horario;
    int i;
    list <int> listinha;

    while(cin >> n >> k >> m){//ler o valores
        if(!n && !k && !m){//se eles forem 0 acaba o laço while 
            break;
        }
        horario = 0, anti_horario = n - 1;//definir o começo e o fim da lista

        for(i = 1;i <= n; i++){//preencher a lista
            listinha.push_back(i);
        }
        contador = 0;

        while(contador < n){
            //SENTIDO HORARIO
            i = k;
            while(i > 0){
                //como acessar uma posição[i] da lista:
                auto sentido_horario = listinha.begin();
                advance(sentido_horario, horario);

                if(*sentido_horario > 0){ 
                    i--;
                }
                if(i == 0){ 
                    a = horario;//Salvamos a posição que acabou a contagem
                }    
                horario = (horario + 1) % n;
            }
            //SENTIDO ANTI-HORARIO
            i = m;
            while(i > 0){

                auto sentido_anti_horario = listinha.begin();
                advance(sentido_anti_horario, anti_horario);

                if(*sentido_anti_horario > 0){ 
                    i--;
                }
                if(i == 0){
                    b = anti_horario;
                }
                anti_horario = (anti_horario + n - 1) % n;
            }

            if(contador > 0){
                cout <<",";
            }
            auto l_sh = listinha.begin();
            auto l_sath = listinha.begin();

            advance(l_sh, a);
            advance(l_sath, b);

            if(a != b){
                printf("%3d%3d", *l_sh, *l_sath);
                contador += 2;//numeros diferentes
            }else{
                printf("%3d", *l_sh);
                contador++;//numeros iguais
            }

            *l_sh = *l_sath = 0;//vamos zerar os numeros nessas posições, indicando a retirada deles da lista
            
        }
        cout << '\n';
        listinha.clear();//limpar a lista
    }

    return 0;
}