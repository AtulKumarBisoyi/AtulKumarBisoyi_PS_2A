#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2, real, imagi;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1 = %f \nr2 = %f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %f", r1);
    }
    else
    {
        real = -b / (2 * a);
        imagi = sqrt(-d) / (2 * a);
        printf("r1 = %f+i%f \nr2 = %f-i%f", real, imagi, real, imagi);
    }
}
