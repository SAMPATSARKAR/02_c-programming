#include <stdio.h>
int main()
{
    float c;
    float x;
    printf("Enter the radius: ");
    scanf( "%f", &x);
    c = 2 * 3.14 * x;
    printf("The circumference of the circle is %.2f", c);

    return 0;
}