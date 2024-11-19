// Write a C program to check whether the triangle is valid or not if angles are given (You cannot use more than one Logical And in if condition) //
#include <stdio.h>
int main() {
float x , y , z , d ;
printf("Enter the 3 angles respectively : \n");
scanf("%f %f %f",&x,&y,&z);

if( x > 0 && y > 0 && z > 0 && ( x+y+z==180 )){
    printf("The triangle is valid");
}
else { printf("The triangle is not valid");}






    return 0;
}