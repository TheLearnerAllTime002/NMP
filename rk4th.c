// R K 4th ORDER METHOD 
#include <stdio.h>

float f(float x, float y) {
    return (x*x + y*y); 
}

int main() {
    float x0, y0, x, y, h, k1, k2, k3, k4;
    int n, i;

    printf("Enter the value of x0: ");
    scanf("%f", &x0);
    printf("Enter the value of y0: ");
    scanf("%f", &y0);
    printf("Enter the step size (h): ");
    scanf("%f", &h);
    printf("Enter the value of x at which to find y: ");
    scanf("%f", &x);

    n = ((x - x0) / h);
    y = y0;

    for (i = 0; i < n; i++) {
        k1 = h * f(x0, y);
        k2 = h * f(x0 + h / 2, y + k1 / 2);
        k3 = h * f(x0 + h / 2, y + k2 / 2);
        k4 = h * f(x0 + h, y + k3);
        y = y + (k1 + 2*k2 + 2*k3 + k4) / 6;
        x0 = x0 + h;
    }

    printf("The approximate value of y at x = %f is %f\n", x, y);
    return 0;
}


// algo 


Start

Define function f(x, y)
    Return x*x + y*y
End Function

Input x0      // Initial x value
Input y0      // Initial y value
Input h       // Step size
Input x       // Value of x at which to find y

Set n = (x - x0) / h
Set y = y0

For i from 0 to n - 1 do
    k1 = h * f(x0, y)
    k2 = h * f(x0 + h/2, y + k1/2)
    k3 = h * f(x0 + h/2, y + k2/2)
    k4 = h * f(x0 + h, y + k3)

    y = y + (k1 + 2*k2 + 2*k3 + k4) / 6
    x0 = x0 + h
End For

Print "The approximate value of y at x =", x, " is ", y

End


//algo

Start

Define function f(x, y)
    Return x*x + y*y
End Function

Input x0       // Initial x value
Input y0       // Initial y value
Input h        // Step size
Input x        // Value of x at which y is to be calculated

Set n = (x - x0) / h
Set y = y0

For i = 0 to n-1 do
    k1 = h * f(x0, y)
    k2 = h * f(x0 + h/2, y + k1/2)
    k3 = h * f(x0 + h/2, y + k2/2)
    k4 = h * f(x0 + h, y + k3)

    y = y + (k1 + 2*k2 + 2*k3 + k4) / 6
    x0 = x0 + h
End For

Print "The approximate value of y at x =", x, "is", y

End

