#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void area_of_circle(float, float*);

int main()
{
    float radius, area;

    printf("Enter radius of Circle\n");
    scanf("%f", &radius);
    area_of_circle(radius, &area);
    printf("\nArea of Circle = %0.2f\n", area);

    return 0;
}

void area_of_circle(float r, float *a)
{
    *a = 3.14 * r * r;
}
