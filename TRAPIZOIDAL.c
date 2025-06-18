// TRAPEZOIDAL RULE
#include <stdio.h>
#include <math.h>
#define f(x) (1 / sqrt(1 + x * x * x))

int main()
{
    float a, b, h, n, t, p, i, sum = 0;
    printf("Entrer lower limit (a): ");
    scanf("%f", &a);
    printf("Enter Upper Limit (b): ");
    scanf("%f", &b);

    printf("Enter the number of intervals : ");
    scanf("%f", &n);

    h = (b - a) / n;

    for (i = 1; i < n; i++)
    {
        p = a + (h * i);
        sum = sum + f(p);
    }
    t = (h / 2) * (f(a) + f(b) + 2 * sum);

    printf("The value of the intergral is : %f\n", t);
    return 0;
}