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


// algo

Algorithm: Lagrange Interpolation
Step 1: Start

Step 2: Input the number of data points n

Step 3: Input the array of x values

Step 4: Input the array of y values corresponding to each x

Step 5: Input the value p at which interpolation is to be calculated

Step 6: Initialize result = 0

Step 7: For each i from 0 to n-1 do
  a. Set t = y[i]
  b. For each j from 0 to n-1 do
    If j != i then
      Update t = t * (p - x[j]) / (x[i] - x[j])
  c. Add t to result

Step 8: Output the interpolated value result

Step 9: End
