#include <stdio.h>
int main(){
    int row,col,data[3][3];
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&data[row][col]);
        }
    }
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d \t",&data[row][col]);
        }
    }
    return 0;
}