#include <stdio.h>
#include <ctype.h>
int main() {
    char unit;
    float temp;
    
    printf("\n Ts the temp in (F) or (C)?: ");
    scanf("%c",&unit);
    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
        printf("The temp in Farenheight is : %.1f",temp);
    }
    else if (unit == 'F'){
        printf("Enter the temp in farenheit: ");
        scanf("%f",&temp);

        temp = ((temp - 32) * 5) / 9;
        printf("\n The temp in celsius is : %.1f",temp);

    }
    else{
        printf("\n %c is not a valid unit of measurement", unit);

    }
    return 0;
}