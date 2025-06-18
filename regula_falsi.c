#include <stdio.h>
#include <math.h>

#define f(x) ((x) * (x) * (x) - 9 * (x) + 1)

int main() {
    float a, b, c, x, start, end, step = 0.1;
    int flag = 0;

    while (1) {
        printf("Enter the interval: ");
        scanf("%f %f", &start, &end);

        flag = 0;
        for (x = start; x < end; x += step) {
            a = x;
            b = x + step;
            if (f(a) * f(b) < 0) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            break;
        } else {
            printf("No root found in the interval. Try again.\n");
        }
    }

    // Regula Falsi Method
    do {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    } while (fabs(f(c)) > 0.00000001);

    printf("Root = %f\n", c);
    return 0;
}
