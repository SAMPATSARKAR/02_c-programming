#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i =2;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int r;
    printf("enter r: ");
    scanf("%d",&r);
    int nfact =factorial(n);
    int rfact =factorial(r);
    int nrfact =factorial(n-r);
    // for(int i=2;i<=n;i++){
    //     nfact = nfact*i;
    // }
    // for(int i=2;i<=r;i++){
    //     rfact = rfact*i;
    // }
    // for(int i=2;i<=n-r;i++){
    //     nrfact = nrfact*i;
    // }
    // int ncr = nfact/(rfact*nrfact);
    printf("%d",factorial(n)/(factorial(r)*factorial(n-r)));
    return 0;
}
// ---------------------pascal Trinagle---------------
