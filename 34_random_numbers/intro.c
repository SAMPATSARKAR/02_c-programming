#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pseudo random numbers = Aset of values or elements that are statistically random (Don't use these for any sort of cryptographic security)
    //  use current time generate time to generate a seed which we need for random numbers
    srand(time(0)); // s for seed and 'rand' for random. we need it to generate random numbers
    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}