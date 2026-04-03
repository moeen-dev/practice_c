#include <stdio.h>
#include <math.h>

int main()
{
    float r, h, A, V, l;

    printf("Enter your Radius and Height:");
    scanf("%f %f", &r, &h);

    l = sqrt(r * r + h * h);

    A = 3.1416 * r * (r + l);
    V = (1.0 / 3.0) * 3.1416 * r * r * h;

    printf("Area of cone= %f\n Volume of Cone= %f", A, V);
    return 0;
}