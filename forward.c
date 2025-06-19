// NEWTON FORWARD INTERPOLATION 
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
    float p, h, u, s, t;

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
        for (j = 0; j < n - i; j++) {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }
    printf("\n");
    printf("Forward difference table:---\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            printf("%f\t",y[j][i]);
        }
        printf("\n");
    }
    printf("Enter the value to find out: ");
    scanf("%f", &p);
     u = (p - x[0]) / h;
     s = y[0][0];
     t = 1;
    for (i = 1; i < n; i++) {
        t = t* (u - (i - 1));
        s = s+ (t * y[0][i]) / fact(i);
    }

    printf("The interpolated value at x = %f is: %f\n", p, s);

    return 0;
}

// algos

Start

Function fact(n)
    Set f = 1
    While n > 0 do
        f = f * n
        n = n - 1
    End While
    Return f
End Function

Input n      // Number of data points

Declare x[n], y[n][n]

// Input x values
For i from 0 to n - 1 do
    Input x[i]
End For

// Input y values
For i from 0 to n - 1 do
    Input y[i][0]
End For

// Calculate step size
Set h = x[1] - x[0]

// Construct forward difference table
For i from 1 to n - 1 do
    For j from 0 to n - i - 1 do
        y[j][i] = y[j + 1][i - 1] - y[j][i - 1]
    End For
End For

// Display the forward difference table
For j from 0 to n - 1 do
    For i from 0 to n - j - 1 do
        Print y[j][i]
    End For
    Print newline
End For

// Input value to interpolate
Input p

// Compute u
Set u = (p - x[0]) / h
Set s = y[0][0]
Set t = 1

// Apply Newton Forward formula
For i from 1 to n - 1 do
    t = t * (u - (i - 1))
    s = s + (t * y[0][i]) / fact(i)
End For

Print "The interpolated value at x = ", p, " is: ", s

End
