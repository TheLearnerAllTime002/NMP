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

// algo 

Start

Input a    // Lower limit
Input b    // Upper limit
Input n    // Number of intervals

Set h = (b - a) / n
Set sum = 0

For i from 1 to n - 1 do
    p = a + i * h
    sum = sum + f(p)
End For

t = (h / 2) * (f(a) + f(b) + 2 * sum)

Display "The value of the integral is: ", t

End

// Function Definition:
Function f(x)
    Return 1 / sqrt(1 + x^3)
End Function
