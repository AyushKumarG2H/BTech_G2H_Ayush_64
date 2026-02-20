#include<stdio.h>
intmain(){
    int r;
    prinf("enter the redius= ");
    scanf("%d",& r);
    int area=3.14*r*r;
    printf("area= %d",area);
    int circumference=2*3.14*r;
    printf(" circumference= %d",circumference);
    return 0;
}