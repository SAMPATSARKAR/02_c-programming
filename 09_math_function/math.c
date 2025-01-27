// #include <stdio.h>
// #include <math.h>

// int main(){
//     double A = sqrt(9); // format-1f
//     double B=pow(2,4);
//     int C = round(3.14);// d
//     int D = ceil(3.1);//d
//     int E = floor(3.99);//d

//     double F = fabs(-100);  //f    ;
//     double G = log(3);//f
//     double H = sin(45); //f
//     double I = cos(45);//f
//     double J = tan(45);//f

//     printf("\n%d",E);

//     return 0;
// }

#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 5.8, num2 = -2.3;

    printf("Number: %.2f\n", num1);
    printf("Floor: %.2f\n", floor(num1)); // Output: 5.00
    printf("Ceil: %.2f\n", ceil(num1));   // Output: 6.00

    printf("\nNumber: %.2f\n", num2);
    printf("Floor: %.2f\n", floor(num2)); // Output: -3.00
    printf("Ceil: %.2f\n", ceil(num2));   // Output: -2.00

    return 0;
}
