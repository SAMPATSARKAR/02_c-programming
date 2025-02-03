#include <stdio.h>
int main()
{
    // pointer = a 'variable-like' refernece that holds a memory address to another variable, array, etc. some tasks are performed more easily with pointers
    // * = indirection operator (value at address)- takes that address
    //& = referencing(address of x)

    int age = 21;
    int *pAge = &age;
    printf("address of age- %p\n", &age); // p prints in hexadecimal form ie is 1-9,10-A,11-B,12-C
    printf("value of pAge- %p\n", pAge);
    // printf("value- %d",age);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age- %d\n", age);
    printf("value at stored address:- %d\n", *pAge); // dereferencing

    return 0;
}