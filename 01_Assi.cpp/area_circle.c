#include<stdio.h>

int main(){
    float area,r;
    printf("Enter the Radius");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("The area of circle is: %f Having radius: %f",area,r );
    return 0;
}