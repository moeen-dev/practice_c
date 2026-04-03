#include <stdio.h>
#include <math.h>

int main()
{
    float r, h, A, V;

    printf("Enter your Radius and Height =");
    scanf("%f %f", &r, &h);

    A = 2 * 3.1416 * r * (r + h);
    V = 3.1416 * r * r * h;

    printf("The Araa of Cylender = %f \n The Volume of Cylender= %f", A, V);
    return 0;
}