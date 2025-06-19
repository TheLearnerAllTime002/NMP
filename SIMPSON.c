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


//Algos

Start

Input a   // Lower limit
Input b   // Upper limit

Repeat
    Input n   // Number of intervals
    If n is not even
        Display "Number of intervals must be even. Try again!"
    Else
        Exit loop
Until n is even

Set h = (b - a) / n
Set sum = 0

For i from 1 to n - 1 do
    p = a + i * h
    If i is even then
        sum = sum + 2 * f(p)
    Else
        sum = sum + 4 * f(p)
End For

t = (h / 3) * (f(a) + f(b) + sum)

Display "The value of the integral is: ", t

End

// Function Definition:
Function f(x)
    Return 1 / sqrt(1 + x^3)
End Function

