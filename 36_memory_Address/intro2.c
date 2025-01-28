#include <stdio.h>

int main(){
    // memory = an array of bytes within RAM (street)
    // memory block = a singl unit (byte) within memory,used to hold some value (person)
    // memory address= the address of where a memory block is located (house address)

    char a = 'X';
    char b[2];
    printf("%d bytes\n", sizeof(a));// memory block
    printf("%d bytes\n", sizeof(b));
    // printf("%d bytes\n", sizeof(c));

    printf("%p\n",&a);// address within ram
    printf("%p\n",&b);
    // printf("%p\n",&c);
    return 0;
}