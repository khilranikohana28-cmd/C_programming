#include <stdio.h>
#include <math.h>

int main(){
    int x=9;
    x= sqrt(x);
    printf("%d\n", x);

    int y= 2;
    y=pow(y,2);
    printf("%d\n", y);

    float z= 3.14;
    z=round(z);
    printf("%f\n", z);

    float a= 3.14;
    a= ceil(a);
    printf("%f\n", a);

    float b=3.99;
    b= floor(b);
    printf("%f\n", b);

    int c= -3;
    c= abs(c);
    printf("%d", c);

    float d= 3;
    d= log(d);
    printf("%f",d);

    //same for trignometry i.e. sin, cos, tan

    return 0;
}