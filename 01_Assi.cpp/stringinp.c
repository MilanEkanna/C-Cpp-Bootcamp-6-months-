#include<stdio.h>

int main(){
    char s [100];
    printf("Enter the full name : ");
    scanf("%[^\n]s",s); //It is used to print the string till     \n comes and also string ko input karane k liye address operator lagane ki need nhi hai.....
    printf("%s",s);
    return 0;
}

