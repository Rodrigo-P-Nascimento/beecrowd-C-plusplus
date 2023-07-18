#include <iostream>

using namespace std;

int main(){

    double n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;

    n1*=2;
    n2*=3;
    n3*=4;
    n4*=1;

    double media=(n1+n2+n3+n4)/10;

    cout.precision(1);
    cout << fixed;
    cout <<"Media: "<<media<<endl;

    if(media >= 7){
        cout <<"Aluno aprovado.\n";
    }
    else if(media >= 5 && media <= 6.9 ){
        cout <<"Aluno em exame.\n";

        double novaMedia;
        cin >> novaMedia;
        cout <<"Nota do exame: " << novaMedia <<endl;

        media = (media+novaMedia)/2;

        if(media >= 5){
            cout <<"Aluno aprovado.\n";
        }else{
            cout <<"Aluno reprovado.\n";
        }
        cout << "Media final: " <<media<<endl;
    }
    else{
        cout <<"Aluno reprovado.\n";
    }

    return 0;
}
