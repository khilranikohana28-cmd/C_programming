#include <stdio.h>

int main(){
    char item[50]="";
    float price = 0.0f;
    int quantity= 0;
    char currency ='$';
    float total= 0.0f;
    
    printf("What item would you like to buy?\n");
    fgets(item, sizeof(item), stdin);

    printf("What is the price of each of these items?\n");
    scanf("%f", &price);

    printf("How many would you like to buy?\n");
    scanf("%d", &quantity);

    total= price * quantity;
    printf("\nYou have bought %d %s/s.\n", quantity, item);
    printf("The total price is= %c%.2f", currency, total);

    return 0;

}