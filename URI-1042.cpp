#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> lista;
    list <int>::iterator it;
    int num[3];
    int value, i;

    it = lista.begin();

    for(i=0; i<3;i++){
        cin >> value;
        num[i] = value;
        advance(it, i);
        lista.insert(it, value);
    }

    lista.sort();

    for(auto v: lista){
        cout << v << "\n";
    }
    cout << "\n";
    for(i=0;i<3;i++){
        cout << num[i] <<"\n";
    }

    return 0;
}
