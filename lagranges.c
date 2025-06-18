// LAGRANGE INTERPOLATION 
#include <stdio.h>

int main() {
    int n, i, j;
    float p, result = 0.0,t;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    float x[n], y[n];

    printf("Enter the x values:---\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }
    printf("Enter the y values ;---\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }

    printf("Enter the value of x to interpolate: ");
    scanf("%f", &p);

    for (i = 0; i < n; i++) {
         t = y[i];
        for (j = 0; j < n; j++) {
            if (j != i) {
                t = t * (p - x[j]) / (x[i] - x[j]);
            }
        }
        result = result+t;
    }

    printf("Interpolated value at x = %f is %f\n", p, result);

    return 0;
}