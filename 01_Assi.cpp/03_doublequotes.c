// To print double quotes or ” using printf, we can take help of backslash. Because, directly, we can’t print double quotes in C. If we try to print ” like the below program, it will throw one compile error:


// #include<stdio.h>

// int main(){
//     printf(" \"ineuron\" ");
//     return 0;
// }
#include<stdio.h>

int main(){
    int a;
    char w ;
    printf("Enter one numbers and character\n");
    scanf("%d # %c",&a, &w); // Here # is used as a seprator....
    printf("%d and %c",a ,w);
 
    return 0;
}