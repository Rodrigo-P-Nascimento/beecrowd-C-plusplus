#include <iostream>

using namespace std;

int main(){

    int x, d, resul;
    int resJ, resM;
    int casos;

    cin >> casos;

    for(int j=0; j < casos; j++){
        resJ = resM = resul = x  = d =0;
        for(int i=0; i < 3; i++){
            cin >> x >> d;
            resul=(x*d);
            resJ+=resul;
        }
        x = d = resul = 0;
        for(int i=0; i < 3; i++){
            cin >> x >> d;
            resul = (x*d);
            resM+=resul;
        }
        cout << "Resu joao: " << resJ << "\n";
        cout << "Resu maria: "<< resM << "\n";
        if(resJ > resM){
            cout << "JOAO" << "\n";
        }else{
            cout << "MARIA" <<"\n";
        }
    }
    return 0;
}
