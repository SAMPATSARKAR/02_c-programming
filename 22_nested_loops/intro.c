#include <stdio.h>
int main(){
    int rows ;
    int columns ;
    char symbol ;

    printf("\nEnter number of rows: ");
    scanf("%d",&rows);

    printf("\nEnter number of columns: ");
    scanf("%d",&columns);

    // scanf(" %c");

    printf("\nEnter symbol to use: ");
    scanf(" %c",&symbol);// by giving space in %c we can ignore leading whitespaces.

    for (int i = 1; i<= rows; i++)
    {
        for(int j = 1; j <= columns; j++)

        {
            printf("%c",symbol);
        }
        printf("\n");

    }



    return 0;

}