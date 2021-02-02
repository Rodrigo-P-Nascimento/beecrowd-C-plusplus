#include <iostream>
#include <stdio.h>

using namespace std;

int FormaTri(float a, float b, float c){

    int flag=1;

    if((a+b) <= c){
        flag =0;
    }
    else if((a+c) <= b){
        flag =0;
    }
    else if((b+c) <= a){
        flag =0;
    }
    return flag;
}

int main(){

    float a, b, c;
    int flag;
    cin >> a >> b >> c;

    flag = FormaTri(a, b, c);

    if(flag == 1 ){
        printf("Perimetro = %.1lf\n", (a+b+c));
    }else{
        float area;
        area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}
