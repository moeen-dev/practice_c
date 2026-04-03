#include <stdio.h>
#include <math.h>

int main()
{
    int Base, Height, Area;

    printf("Enter Base and Height:");
    scanf("%d %d", &Base, &Height);

    Area = Base * Height;

    printf("The area of Rectangle = %d", Area);
    return 0;
}