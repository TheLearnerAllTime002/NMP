#include <stdio.h>
#include <math.h>
#define f(x) (1 / sqrt(1 + x * x * x))

int main()
{
    float a, b, h, t, p, sum = 0;
    int i, n;
    printf("Entrer lower limit (a): ");
    scanf("%f", &a);
    printf("Enter Upper Limit (b): ");
    scanf("%f", &b);
        while (1)
    {
        printf("Enter the number of intervals (even n): ");
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            printf("Number of intervals must be even. Try again!\n");
        }
        else
        {
            break;
        }
    }

    h = (b - a) / n;

    for (i = 1; i < n; i++)
    {
        p = a + (h * i);
        if (i % 2 == 0)
        {
            sum = sum + 2 * f(p);
        }
        else
        {
            sum = sum + 4 * f(p);
        }
    }
    t = (h / 3) * (f(a) + f(b) + sum);

    printf("The value of the intergral is : %f\n", t);
    return 0;
}