#include <stdio.h>
#include <stdlib.h>
#define TOTAL 780.000
int main()
{
    float ganh1, ganh2, ganh3;
    ganh1 = TOTAL * 0.46;
    ganh2 = TOTAL * 0.32;
    ganh3 = TOTAL * 0.22;
    printf("O ganhador 1 recebera %.3fR$, o ganhador 2 recebera %.3fR$ e o ganhador 3 recebera %.3fR$",
           ganh1, ganh2, ganh3);
   return 0;

}
