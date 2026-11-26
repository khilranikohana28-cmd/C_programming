#include <stdio.h>
#include <math.h>

int main(){
    double principal=0.0;
    double rate=0.0;
    int years= 0;
    int timesCompunded= 0;
    double total= 0.0;

    printf("Compund interest calculator:\n");

    printf("Enter the Principal(P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate(R): ");
    scanf("%lf", &rate);
    rate= rate/100;

    printf("Enter the time(years, t): ");
    scanf("%d", &years);

    printf("Enter the no. of times compounded: ");
    scanf("%d", &timesCompunded);

    total= principal* pow(1+rate/ timesCompunded, timesCompunded*years);
    printf("After %d years, the total will be $%.3lf", years, total);

    return 0;
}