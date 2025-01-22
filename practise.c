#include <stdio.h>
#include <ctype.h>
int main()
{
    char grade;
    printf("Enter grade: ");
    scanf("%c", &grade);
    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect");
        break;
    case 'B':
        printf("good");
        break;
    case 'C':
        printf("moderate");
        break;
    case 'D':
        printf("not good");
        break;
    case 'F':
        printf("not good");
        break;
    default:
        printf("Enter valid grade");
    }

    return 0;



}