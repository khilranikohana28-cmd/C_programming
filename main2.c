#include <stdio.h>

int main(){
    int age = 18;
    float gpa=4.5;
    double pi=3.141592653589793;
    char grade ='A';
    char symbol= '^';
    char name[]= "Kohana Khilrani";
    printf("you are %d years old\n",age);
    printf("you have %f cgpa.\n",gpa);
    printf("value of pi is %.15lf\n", pi);
    printf("your grade is %c\n", grade);
    printf("you use %c to display exponents\n", symbol);
    printf("My name is %s.", name);
    return 0;
}