#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) 
{
    float delta = (B * B) - (4 * A * C);

    if (delta < 0) {
        return 0;

    } else if (delta == 0) {
        *X1 = - B / (2 * A);
        return 1;

    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
        
    }
}