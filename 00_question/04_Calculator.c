#include <stdio.h>
int main(){
    char operator;
    double num1;
    double num2;
    double result;


    printf("\n Enter an Operator (+ - * /): ");
    scanf("%c",&operator);


    printf("Enter number 1: ");
    scanf("%lf",&num1);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    switch(operator){
        case '+':
        result = num1 + num2;
        printf("The sum is %.2lf",result);
        break;
        case '-':
        result = num1 - num2;
        printf("The difference is %.2lf",result);
        break;
        case '*':
        result = num1 * num2;
        printf("The multiplication is %.2lf",result);
        break;
        case '/':
        result = num1 / num2;
        printf("The division is %.2lf",result);
        break;
        default:
        printf("%c is not valid", operator);

        return 0;
    }
}