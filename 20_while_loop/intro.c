// #include <stdio.h>
// #include <string.h>
// int main()
// {
//      // while loop = repeats a section of code 
//    // possibily unlimited times.
//    // WHILE some condition remans true
//      // a while loop might not execute at all

//     char name[25];
//     printf("\nwhat's your name?: ");
//     fgets(name, 25,stdin);
//     name[strlen(name) - 1] = '\0';

//     while(strlen(name) == 0)
//     {
//         printf("YOu didnot enter your name");
//         printf("\nwhat's your name?: ");
//         fgets(name, 25,stdin);
//         name[strlen(name) - 1] = '\0';
//     }

//     printf("Hello %s", name);

//    return 0;
// }


#include <stdio.h>
#include <string.h>
int main(){
  char a[25];
  printf("Enter a character: ");
  scanf("%s",&a);
  int result = strlen(a);
  printf("%d",result);

  return 0;
}