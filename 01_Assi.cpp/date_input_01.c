#include<stdio.h>

int main(){
    int DD,MM,YY;
    printf("Input the date int DD/MM/YYYY format\n");
    scanf("%d/%d/%d", &DD ,&MM ,&YY);
    printf("Day - %d ,Month - %d ,Year - %d",DD, MM, YY);
    return 0;
}