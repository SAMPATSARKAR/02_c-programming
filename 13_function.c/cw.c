#include <stdio.h>
int main(){
    void india();
    india();
    return 0;
}
void india(){
    printf("I am in india\n");
    void australia();
    australia();
    return;
}
void australia(){
    printf("I am in australia");
    return;
}
