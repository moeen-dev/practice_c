#include <stdio.h>
#include <math.h>

int main()
{
    int r;
    float A, V;

    printf("Enter Your Radius:");
    scanf("%d", &r);

    A = 3.1416 * r * r;
    V = (4.0 / 3.0) * 3.1416 * r * r * r;

    printf("Area of Circle=%f\n Volume of Circle=%f", A, V);
    return 0;
}