#include <stdio.h>
#include <math.h>

#define f(x) (x * x * x - 9 * x + 1)

int main() {
    float start, end, step = 0.1;
    float a, b, c;

    while (1) {
        printf("Enter the interval: ");
        scanf("%f %f", &start, &end);
        int flag = 0; 
        for (float x = start; x < end && !flag; x += step) {
            a = x;
            b = x + step;
            if (f(a) * f(b) < 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;  
        } else {
            printf("No root exists in this interval.\n");
        }
    }
    do {
        c = (a + b) / 2; 
        if (f(a) * f(c) < 0) {
            b = c;  
        } else {
            a = c; 
        }
    } while (fabs(f(c)) > 0.0001);  

    printf("Root = %f\n", c);
    return 0;
}

//algos

Start

Define function f(x) = x^3 - 9x + 1

Set step = 0.1

Repeat
    Input start, end   // Interval from user

    Set flag = 0

    For x from start to end with step size 0.1 do
        a = x
        b = x + step
        If f(a) * f(b) < 0 then
            Set flag = 1
            Break the loop
        End If
    End For

    If flag == 0 then
        Display "No root exists in this interval."
    End If

Until flag == 1

// Bisection Iteration
Repeat
    c = (a + b) / 2

    If f(a) * f(c) < 0 then
        b = c
    Else
        a = c
    End If

Until |f(c)| < 0.0001   // Tolerance condition

Display "Root = ", c

End
