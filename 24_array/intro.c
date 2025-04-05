// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(){

//     //array = a data structure that can store many values of the same data type

//     double prices[] = {5.0,10.0,15.0,25.0,20.0};// by adding [] after variable makes it an array
//     // printf("$%.2lf", prices[0]);
    
//     // char name[]= "Bro"; // array of character like a,b,c...
//     // printf("%d",strlen(name));
//     return 0;
// }

// -----------------------array----------------------------------

// #include <stdio.h>
// int main(){
//     int marks[5],i,sum=0,avg,b=0;
//     printf("Enter the marks: ");
//     for(i=0;i<5;i++){
//         scanf("%d",&marks[i]);
//         sum+=marks[i];
//     }
//         avg = sum/5;

//     for(i=0;i<5;i++){
//            if(marks[i]<avg)
//                b++;
//     }
   
    
//     printf("%d\n",sum);
//     printf("%d\n",avg);
//     printf("%d\n",b);
//     return 0;
// } 

// ----------------------------bubble sort-------------------------------------

// #include <stdio.h>
// int main()
// {
//     int marks[20],i,sum=0,ba=0,temp,j;
//     printf("enter marks of 20 students \n");
//     for(i=0;i<20;i++)
//     {
//         scanf("%d",&marks[i]);
//         sum+=marks[i];
//     }
//     printf("sum of marks of all the students is %d\n",sum);
//     float avg;
//     avg = (float)sum/20;
//     printf("average marks of 20 students = %f\n",avg);
//     for(i=0;i<20;i++)
//     {
//         if(marks[i] < avg)
//             ba++;
//     }
//     printf("number of students scoring below average are %d\n",ba);
//     for(i=0;i<19;i++)
//         for(j=0;j<20-i;j++)
//         {
//             if(marks[j] > marks[j+1])
//             {
//                 temp = marks[j];
//                 marks[j] = marks[j+1];
//                 marks[j+1] = temp;
//             }
//         }
//     printf("the sorted marks are \n");
//     for(i=0;i<20;i++){
//         printf("%d\n",marks[i]);
//     }
    
//     int median;
//     median = sizeof(marks)/2;
//        printf("median is %d",median);
//     return 0;

// }


// #include <stdio.h>
// int main(){
//     int row,col,data[3][3];
//     for(row=0;row<3;row++){
//         for(col=0;col<3;col++){
//             scanf("%d",&data[row][col]);
//         }
//     }
//     for(row=0;row<3;row++){
//         for(col=0;col<3;col++){
//             printf("%d",data[row][col]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int findMax(int arr[],int size){
//     int max = arr[0];
//     for(int i = 1; i<size; i++){
//         if(arr[i]> max){
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int main(){
//     int arr[] = {10,45,23,89,5,67};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int max = findMax(arr, size);
//     printf("%d",max);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int marks[10] = {95,90,31,25,100,50,65,89,97,30};
//     for(int i=0;i<10;i++){
//         if(marks[i]<35){
//             printf("marks-%d , roll no- %d :",marks[i],i+1);
//             // printf("%d ",i);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int arr[6] = {1,2,5,3,8,9};
//     int product =1;
//     for(int i=0;i<6;i++){
//         product = product * arr[i];
//     }
//     printf("%d",product);
//     return 0;
// }

#include <stdio.h>
int main(){
    int arr[8]={9,2,11,13,3,4,8,7};
    int max = -1;
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
     printf("%d",max);
    return 0;
}



