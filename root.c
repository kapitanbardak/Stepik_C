#include <stdio.h>

double root(double a, double xn){
    double next = 0.5 * (xn + a/xn);
    double delta = next - xn;
    if (delta < 0)
        delta = -delta;
    if (delta < 0.0000000001)
        return next;
    else
        next = root(a, next);
        return (next);
}

int main()
{
    double a;
    scanf("%lf", &a);
    
    a = root(a, 1);
    printf("%lf", a);

    return 0;
}