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