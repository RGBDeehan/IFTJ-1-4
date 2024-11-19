// Write a C program that can input two teams points and net run rate in a competition. Display which team's rank is higher. //
#include <stdio.h>
int main() {
float a ,b ,c,d,x,y,z;
printf("Enter 1st teams point:");
scanf("%f",&a);
printf("Enter 1st teams run rate:");
scanf("%f",&b);

printf("Enter 2nd teams point:");
scanf("%f",&c);
printf("Enter 2nd teams run rate:");
scanf("%f",&d);

if( a > c){
    printf("1st teams point heigher\n");
}
else {printf("2nd teams point heigher\n");}

if (b> d){
    printf("1st teams runrate heigher\n");

}
else{printf("2nd teams runrate heigher\n");}
    return 0;
}