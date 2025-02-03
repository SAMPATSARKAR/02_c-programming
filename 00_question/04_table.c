// #include <stdio.h> // while loop
// int main(){
//     int i=1,x=2,z;
//     while (i<=10){
//         z=x*i;
//         printf("%d * %d = %d\n",x,i,z);
//         i++;

//     }
//     return 0;
// }
// #include <stdio.h> // for loop
// int main(){
//     int i,x=2,z;
//     for (i=1;i<=10;i++){
//         z=x*i;
//         printf("%d * %d = %d\n",x,i,z);
//     }
//     return 0;
// }

// #include <stdio.h> // do while loop
// int main(){
//     int i=1,x=2,z;
//     do {
//         z=x*i;
//         printf("%d * %d = %d\n",x,i,z);
//         i++;

//     } while (i<=10);
//     return 0;
// }
#include <stdio.h>
// int main()
// {
// int i,j,n;
// scanf("%d",&n);
// for (i=1;i<=n;i++){
//     for (j=1;j <=i;j++){
//         printf("%d",j);
//     }
//     printf("\n");
    
// }

// }
#include <stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
    for (j=n;j>=n+1-i;j--){
        printf("%d",j);
    }
    printf("\n");
    
}

}