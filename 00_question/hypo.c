#include <stdio.h>
#include <math.h>
int main(){
    float l;
    float b;
    printf("Enter the length: ");
    scanf("%1f",&l);
    printf("Enter the breath: ");
    scanf("%1f",&b);
    float h=sqrt(pow(l,2) + pow(b,2));
    printf("Hypotenus is %1f",h);

    return 0;

}