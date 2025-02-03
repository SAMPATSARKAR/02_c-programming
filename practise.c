// // #include <stdio.h>
// // #include <ctype.h>
// // int main()
// // {
// //     char grade;
// //     printf("Enter grade: ");
// //     scanf("%c", &grade);
// //     grade = toupper(grade);

// //     switch (grade)
// //     {
// //     case 'A':
// //         printf("Perfect");
// //         break;
// //     case 'B':
// //         printf("good");
// //         break;
// //     case 'C':
// //         printf("moderate");
// //         break;
// //     case 'D':
// //         printf("not good");
// //         break;
// //     case 'F':
// //         printf("not good");
// //         break;
// //     default:
// //         printf("Enter valid grade");
// //     }

// //     return 0;

// // }

// // #include <stdio.h>
// // #include <string.h>

// // int main(){
// //     char string1[] = "Bro";
// //     char string2 []= "Code";

// //     strset(string1, '?');
// //     printf("%s", string1);

// //     return 0;
// // }
// // #include <stdio.h>
// // // #include <string.h>

// // int main(){
// //     int a;
// //     a=10;

// //     printf("%d", ~a);

// //     return 0;
// // }
// // #include <stdio.h>

// // int main() {
// //     while (1) {
// //         printf("hello");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main()
// // {
// //     const int a = 5;
// //     a=a+10;
// //     printf("%d",a);
// //     return 0;

// // }
// // You are using GCC
// // #include <stdio.h>
// // int main(){
// //     int a,b,c,d,e;
// //     int total = a+b+c+d+e;
// //     float per = total/5;
// //     printf("Total: %.2d \n",total);
// //     printf("Percentage: %.2f",per);

// //     return 0;

// // }
// #include <stdio.h>
// #include <ctype.h>
// int main(){
//     char a;
//     printf("Enter your grade: ");
//     scanf("%c",&a);
//     a = toupper(a);

//     switch(a){
//         case 'A':
//         printf("perfect");
//         break;
//         case 'B':
//         printf("good");
//         break;
//         default:
//         printf("Enter valid grade");

//     }
//         return 0;
// }

// #include <stdio.h>
// int main() {
//     int x = 5;
//     printf("%d", x > 5); // Outputs 1
//     return 0;
// }
// You are using GCC
// You are using GCC
// You are using GCC
// #include <stdio.h>
// int main(){
//     int miles, Gas;
//     double avg_Miles_per_lit;
//     int Parking , Tolls;
//     scanf("%d",&miles);
//     scanf("%d",&Gas);
//     scanf("%lf",&avg_Miles_per_lit);
//     scanf("%d",&Parking);
//     scanf("%d",&Tolls);
//     float total_cost=(miles/avg_Miles_per_lit)* Gas + Parking + Tolls;
//     printf("%.2f",total_cost);
//     return 0;
// }
// You are using GCC
// #include <stdio.h>
//     const char* gpa(int m , int s){
//         return (m>6.0 && s>50.5)?("Eligible for next Round"):("Not Eligible");
//     }
//     int main(){
//         int b,c;
//         scanf("%d",&b);
//         scanf("%d",&c);
//         const char* a =gpa(b,c);
//         printf("%s",a);
//         return 0;
//     }
// You are using GCC
// #include <stdio.h>
// int main(){
//     int x, y;
//     scanf("%d",&x);
//     scanf("%d",&y);
//     printf("x>y: %d\n",x>y);
//     printf("x>=y: %d\n",x>=y);
//     printf("x<y: %d\n",x<y);
//     printf("x<=y: %d\n",x<=y);
//     printf("x==y: %d\n",x==y);
//     printf("x!=y: %d\n",x!=y);

//     return 0;
// }
// You are using GCC
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     a-=2;
//     printf("%d",a);
//     b+=2;
//     printf("%d",b);
//     c*=2;
//     printf("%d",c);

// }
// You are using GCC
// #include <stdio.h>
// char voter_age(int x){
//     return (x>18)?("Eligible for Voting"):("Not eligible for Voting");

// }
// int main(){
//     int x;
//     scanf("%d",&x);
//     char c=voter_age(x);
//     printf("%s",c);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int ch;
//     printf("Enter a value between 1 to 2: ");
//     scanf("%d", &ch); // Correct way to take input

//     switch(ch)
//     {
//         case 1:
//             printf("1\n");
//             break;
//         case 2:
//             printf("2\n");
//             break;
//         default:
//             printf("Invalid input\n"); // Handle cases other than 1 or 2
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i,x=2,z;
//     for (i=1;i<=10;i++){
//         z=x*i;
//         printf("%d * %d = %d\n",x,i,z);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int i,x=2,z;
//     while (i<=10){
//         z=x*i;
//         printf("%d * %d = %d\n",x,i,z);

//         i++;
//     }
//     return 0;
// }
// #include <stdio.h>

// void printDiamond(int n) {
//     int i, j, num;

//     for (i = 1; i <= n; i++) {
//         // Printing leading spaces
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Printing ascending numbers
//         for (num = 1; num <= i; num++) {
//             printf("%d", num);
//         }
//         // Printing descending numbers
//         for (num = i - 1; num >= 1; num--) {
//             printf("%d", num);
//         }
//         printf("\n");
//     }

//     // Lower half excluding middle line
//     for (i = n - 1; i >= 1; i--) {
//         // Printing leading spaces
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Printing ascending numbers
//         for (num = 1; num <= i; num++) {
//             printf("%d", num);
//         }
//         // Printing descending numbers
//         for (num = i - 1; num >= 1; num--) {
//             printf("%d", num);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n = 5; // Diamond size
//     printDiamond(n);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n,i,j,k,l;
//     printf("enter the value of n ");
//     scanf("%d",&n);
// // first half
//     for(i=1;i<=n;i++)
//     {
//         for(j=n-i;j>=1;j--)
//             printf(" ");
//         for(k=1;k<=i;k++)
//             printf("%d",k);
//         for(l=i-1;l>=1;l--)
//             printf("%d",l);
//         printf("\n");
//     }
//  //second half
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf(" ");

//         }
//         for(k=1;k<=n-i;k++)
//         {
//             printf("%d",k);
//         }
//         for(l=n-i-1;l>=1;l--)
//         {
//             printf("%d",l);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

//     void fibo(int n)
//     {
//         if (n < 1)
//         {
//             printf("invalid");
//             return;
//         }
//         int prev1 = 1;
//         int prev2 = 0;

//         for (int i = 1; i <= n; i++)
//         {
//             if (i>2){
//             int curr = prev1 + prev2;
//             prev2=prev1;
//             prev1=curr;
//             printf("%d ",curr);
//             }
//             else if(i==1){
//                 printf("%d",prev2);
//             }
//             else if(i==2){
//                 printf("%d",prev1);
//             }
//         }
//     }
//     int main(){
//         fibo(16);
//         return 0;
//     }
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("enter first number ");
    scanf("%d", &n1);
    int f = 0, s = 1, n;
    n = f + s;
    while (n < n1)
    {
        f = s;
        s = n;
        n = f + s;
    }
    if (n == n1)
        printf("Yes");
    else
        printf("no");
    return 0;
}
