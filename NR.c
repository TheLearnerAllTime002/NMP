// NEWTON RAPHSON METHOD 
#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x - 8*x - 4)
#define f1(x) (3*x*x - 8)
int main()
{
    float a,b,c,x0,x1;
    while(1)
    {
        printf("Enter the interval \n");
        scanf("%f %f",&a,&b);
        if(f(a)*f(b)<0)
        {
            break;
        }
        else
        {
            printf("Invalid interval!\n");
        }
    }
    x0 = (a+b)/2;
   do
    {
        c=x0;
        x1 = x0 - (f(x0)/f1(x0));
        x0 = x1;
    }
    while(fabs(x1-c)>.00001);
    printf("Root = %f",x1);
    return 0;
}




//Algos

Start

Define f(x) = x^3 - 8x - 4
Define f'(x) = 3x^2 - 8

Repeat
    Prompt user to enter interval [a, b]
    Read a, b

    If f(a) * f(b) < 0
        Valid interval → Exit loop
    Else
        Display "Invalid interval!"
End Repeat

Set initial guess x0 = (a + b) / 2

Repeat
    Store previous value: c = x0

    Compute next approximation:
        x1 = x0 - f(x0) / f'(x0)

    Update x0 = x1

Until |x1 - c| < 0.00001

Display "Root = ", x1

End
