#include <stdio.h>
#include <stdbool.h>
int main()
{
    float temp = 10;
    if (temp <= 0 || temp >= 30){
        printf("the temp is bad");
    }
    else{
        printf("The temp is good");
    }
    return 0;
}