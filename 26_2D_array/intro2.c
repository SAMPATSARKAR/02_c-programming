#include <stdio.h>
int main(){
    int numbers[3][3]={{7,8,9},{1,2,3},{4,5,6}};


    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int column = sizeof(numbers[0])/sizeof(numbers[0][0]);
    

    printf("rows: %d\n", rows);
    printf("columns: %d\n", column);
    for (int i=0 ;i < rows;i++){
        for(int j =0; j < column;j++){
            printf("%d ",numbers[i] [j]);
        }
        printf("\n");
    }  
    return 0;


}