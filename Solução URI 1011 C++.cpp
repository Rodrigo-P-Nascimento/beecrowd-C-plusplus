#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double pi=3.14159;
    double raio, volume;

    cin >> raio;
    raio = pow(raio, 3);
    volume = ((4/3.0) * pi * raio);

    cout.precision(3);
    cout << fixed;
    cout << "VOLUME = " << volume << "\n";

    return 0;
}
