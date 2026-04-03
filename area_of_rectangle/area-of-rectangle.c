#include <stdio.h>
#include <math.h>

int main()
{
    float Base, Height, Area;

    printf("Enter Base and Height:");
    scanf("%f %f", &Base, &Height);

    Area = Base * Height;

    printf("The area of Rectangle = %f", Area);
    return 0;
}