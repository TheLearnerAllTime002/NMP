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