// #include <stdio.h>
// int main(){
//         /*switch = a more efficient alternative to using
//         many "else if" statements allows a value to be tested for equality against many cases*/

//     char grade;
//     printf("\n Enter a letter grade: ");
//     scanf("%c",&grade);
//     if(grade == 'A'){
//         printf("Perfect!\n");
//     }
//     else if (grade == 'B'){
//         printf("You did good!\n");
//     }
//     else if (grade == 'C'){
//         printf("You did okay");
//     }
//     else{
//         printf("That's not a valid grade");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
        printf("perfect!\n");
        break;
        case 'B':
        printf("You did good!\n");
        break;
        case 'C':
        printf("You did okay!\n");
        break;
        case 'D':
        printf("At least it's not enough!\n");
        break;
        case 'F':
        printf("You Failed\n");
        default:
        printf("Please enter valid grades");

        return 0;

    }
}