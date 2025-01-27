// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char grade;
//     printf("Enter grade: ");
//     scanf("%c", &grade);
//     grade = toupper(grade);

//     switch (grade)
//     {
//     case 'A':
//         printf("Perfect");
//         break;
//     case 'B':
//         printf("good");
//         break;
//     case 'C':
//         printf("moderate");
//         break;
//     case 'D':
//         printf("not good");
//         break;
//     case 'F':
//         printf("not good");
//         break;
//     default:
//         printf("Enter valid grade");
//     }

//     return 0;

// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char string1[] = "Bro";
//     char string2 []= "Code";

//     strset(string1, '?');
//     printf("%s", string1);

//     return 0;
// }
// #include <stdio.h>
// // #include <string.h>

// int main(){
//     int a;
//     a=10;

    
//     printf("%d", ~a);

//     return 0;
// } 
// #include <stdio.h>

// int main() {
//     while (1) {
//         printf("hello");
//     }
//     return 0;
// }

// #include <stdio.h> 
// int main() 
// { 
//     const int a = 5; 
//     a=a+10;
//     printf("%d",a);
//     return 0;
    
// }
// You are using GCC
// #include <stdio.h>
// int main(){
//     int a,b,c,d,e;
//     int total = a+b+c+d+e;
//     float per = total/5;
//     printf("Total: %.2d \n",total);
//     printf("Percentage: %.2f",per);
    
//     return 0;
    
    
    
// }
#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    printf("Enter your grade: ");
    scanf("%c",&a);
    a = toupper(a);
    
    switch(a){
        case 'A':
        printf("perfect");
        break;
        case 'B':
        printf("good");
        break;
        default:
        printf("Enter valid grade");


    }
        return 0;
}
