// WEDDLE RULE
#include <stdio.h>
#include <math.h>

#define f(x) (1 / (x * x + 1))

int main() {
    float a, b, h, t, p[50], fp[50], s = 0;
    int i, n;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);
    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    while (1) {
        printf("Enter number of subintervals (n): ");
        scanf("%d", &n);
        if (n % 6 == 0) {
            break;
        } else {
            printf("For Weddle's Rule, the number of subintervals must be a multiple of 6.\n");
        }
    }

    h = (b - a) / n;

    for (i = 0; i <= n; i++) {
        p[i] = a + h * i;
        fp[i] = f(p[i]);
    }

    for (i = 0; i <= n - 6; i += 6) {
        s += (fp[i] + 5 * fp[i + 1] + fp[i + 2] + 6 * fp[i + 3] + fp[i + 4] + 5 * fp[i + 5] + fp[i + 6]);
    }

    t = (3 * h / 10) * s;

    printf("The value of the integral is: %f\n", t);

    return 0;
}



// algo 

Start

Define function f(x)
    Return 1 / (x*x + 1)
End Function

Input a     // Lower limit
Input b     // Upper limit

Repeat
    Input n    // Number of subintervals
    If n mod 6 != 0 then
        Print "Number of subintervals must be multiple of 6"
    End If
Until n mod 6 == 0

Set h = (b - a) / n

For i from 0 to n do
    p[i] = a + i * h
    fp[i] = f(p[i])
End For

Set s = 0

For i from 0 to n - 6 step 6 do
    s = s + fp[i] + 5*fp[i+1] + fp[i+2] + 6*fp[i+3] + fp[i+4] + 5*fp[i+5] + fp[i+6]
End For

Set t = (3 * h / 10) * s

Print "The value of the integral is: ", t

End
