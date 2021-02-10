#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    float A, B, C, media;
    scanf("%f %f %f", &A, &B, &C);
    media = ((A*2) + (B*3) + (C*5)) / (3+2+5);

    printf("MEDIA = %.1f\n", media);

    return 0;
}
