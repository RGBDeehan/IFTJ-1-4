// Write a program to print a number of days in a month //
#include <stdio.h>

int main() {
    int x;
    printf("Enter month is 1-12:");
    scanf("%d",&x);

    if ( x==1 || x==3 || x==5 || x==7 || x==8|| x == 10 || x == 12){
        printf("The month have 31 days");
    }
else if (x==4 || x==6 || x==9 || x==11){
   printf("The month have 30 days");  
}
else if (x==2){
     printf("The month have 28 days if there is no leap year");
}
    return 0;
}
