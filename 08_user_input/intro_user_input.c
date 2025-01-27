#include <stdio.h>
int main(){
    char name[25];

    int age;
    printf("What is your name: ");
    // scanf("%s",&name);
    fgets(name,25,stdin); //helps us to write full name with space
    printf("Your  name is %s" ,name );

    // printf("How old age you");
    // scanf("%d",&age);
    // printf("You are %d years old", age);

return 0;
}