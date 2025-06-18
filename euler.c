#include <stdio.h>
#include<math.h>

float f(float x, float y){
    return 3*x*x + 1;
}
int main() {
    float x0,y0,x,y,h;
    int n,i;
    printf("Enter the value of x0: ");
    scanf("%f", &x0);
    printf("Enter the value of y0: ");
    scanf("%f", &y0);
    printf("Enter the value of h: ");
    scanf("%f", &h);
    printf("Enter the value of x at which find y: ");
    scanf("%f", &x);

    n = (x-x0)/h;
    y = y0;
    for(i = 0; i<n; i++){
        y = y+h*f(x0, y);
        x0 = x0 + h ;
    }

    printf("The approximate value of y is : %f\n", y);


    return 0;
}