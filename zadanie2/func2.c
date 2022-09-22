#include <stdio.h>
#include <math.h>
#include "function.h"

int main(){
    float x;
    printf("Enter X:");
    scanf("%f", &x);
    printf("f(x) = %f\n", funcF(x));
    printf("g(x) = %f\n", funcG(x));
    return 0;
}
