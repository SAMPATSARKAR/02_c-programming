#include <stdio.h>
enum Day{Sun = 1, Mon = 2,Tue=3,Wed=4,thur=5,Fri=6,Sat= 7 };
int main(){
    // enum = a user defined type of named integer identifier helps to make a program more redable

    enum Day today = Sat;
    // printf("%d", today);
    if (today == 1 || today ==7){
        printf("Holiday");
    }
    else {
        printf("No Holiday");
    }


    return 0;
}