#include <stdio.h>
#include <stdbool.h>

int main(){
    //logical operator = && (AND) checks if two conditions are true
    float temp = 1000;
    bool sunny = false;
    if(temp>=0 && temp <=30 && sunny){
        printf("The weather is good!");
    }
    else{
        printf("The weather is bad!");
    }
    return 0;
} 