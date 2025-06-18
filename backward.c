// NEWTON BACKWARD INTERPOLATION 
#include <stdio.h>

int fact(int n) {
    int f = 1;
    while(n>0)
    {
        f=f*n;
        n--;
    }
    return f;
}

int main() {
    int n, i, j;
    float p, h, v, s, t;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    float x[n], y[n][n];

    printf("Enter the x values:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Enter the y values:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &y[i][0]);
    }

    h = x[1] - x[0];
   
    for (i = 1; i < n; i++) {
        for (j = n-1; j >=i; j--) {
            y[j][i] = y[j][i - 1] - y[j-1][i - 1];
        }
    }
    printf("\n");
    printf("Backward different table :---\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<=j;i++)
        {
            printf("%f\t",y[j][i]);
        }
        printf("\n");
    }
    printf("Enter the value to find out: ");
    scanf("%f", &p);
     v = (p - x[n-1]) / h;
     s = y[n-1][0];
     t = 1;
    for (i = 1; i < n; i++) {
        t = t* (v + (i - 1));
        s = s+ (t * y[n-1][i]) / fact(i);
    }

    printf("The interpolated value at x = %f is: %f\n", p, s);

    return 0;
}