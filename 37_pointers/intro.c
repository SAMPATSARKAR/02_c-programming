#include <stdio.h>
int main(){
// pointer = a 'variable-like' refernece that holds a memory address to another variable, array, etc. some tasks are performed more easily with pointers
// * = indirection operator (value at address)

int age =21;
int *pAge = &age;
printf("address- %p\n",&age);
printf("value of pAge- %p\n",pAge);
// printf("value- %d",age);

return 0;

}