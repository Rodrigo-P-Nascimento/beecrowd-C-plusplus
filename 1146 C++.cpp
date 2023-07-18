#include <iostream>

using namespace std;

int main(){

    int num=1;

    while(num != 0){
        cin >> num;

        for(int i=1; i <=num;i++){
            if(i == num){
                cout <<i << endl;
            }else{
                cout << i << " ";
            }
        }

    }

    return 0;
}
