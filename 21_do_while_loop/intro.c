#include <stdio.h>
int main(){
    // while loop = checks a cond, THEN executes a blockk of code if condtion is true

    // do while loop = always executes a block of code once, THEN checks a condtion

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number above 0: ");
        scanf("%d",&number);

        if (number > 0)
        {
            sum = sum + number;

        }
    }while(number > 0);
    printf("sum: %d", sum);


    return 0;
}