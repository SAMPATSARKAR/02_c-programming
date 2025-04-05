
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the order of matrix: ");
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j =0;j<b;j++){
            if (arr[i][j]%2 != 0){
                printf("* ");
            }
            else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

    // int k;
    // int arr2[a];
    // printf("Enter the column u want sort: ");
    // scanf("%d", &k);
    // for (int i = 0; i < a; i++)
    // {
    //     arr2[i] = arr[i][k];
    // }
    // for (int i = 0; i < a; i++)
    // {
    //     printf("%d ", arr2[i]);
    //     printf("\n");
    // }
    

    
// for (int i = 0; i < a - 1; i++) {
//     for (int j = 0; j < a - i - 1; j++) {
//         if (arr2[j] > arr2[j + 1]) {
//             int temp = arr2[j];
//             arr2[j] = arr2[j + 1];
//             arr2[j + 1] = temp;
//         }
//     }
// }


// printf("Sorted elements:\n");
// for (int i = 0; i < a; i++) {
//     printf("%d\n", arr2[i]);
// }

    // int max = -1;
    // for (int i = 0; i < b; i++)
    // {
    //     if (max < arr2[i])
    //     {
    //         max = arr2[i];
    //     }
    //     printf("%d", max);
    //     printf("\n");
    //     break;
    // }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the order of matrix: ");
//     scanf("%d %d", &a, &b);
//     int arr[a][b];
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
    
//     for(int i=0;i<a;i++){
//         for(int j =0;j<b;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int k;
//     int arr2[a];
//     printf("Enter the column u want sort: ");
//     scanf("%d", &k);
//     for (int i = 0; i < a; i++)
//     {
//         arr2[i] = arr[i][k];
//     }
//     for (int i = 0; i < a; i++)
//     {
//         printf("%d ", arr2[i]);
//         printf("\n");
//     }
    

    
// for (int i = 0; i < a - 1; i++) {
//     for (int j = 0; j < a - i - 1; j++) {
//         if (arr2[j] > arr2[j + 1]) {
//             int temp = arr2[j];
//             arr2[j] = arr2[j + 1];
//             arr2[j + 1] = temp;
//         }
//     }
// }


// printf("Sorted elements:\n");
// for (int i = 0; i < a; i++) {
//     printf("%d\n", arr2[i]);
// }

//     // int max = -1;
//     // for (int i = 0; i < b; i++)
//     // {
//     //     if (max < arr2[i])
//     //     {
//     //         max = arr2[i];
//     //     }
//     //     printf("%d", max);
//     //     printf("\n");
//     //     break;
//     // }
//     return 0;
// }