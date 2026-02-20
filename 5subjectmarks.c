#include<stdio.h>
#include<math.h>
int main ()
{
    float sub1,sub2,sub3,sub4,sub5 ;
    printf("enter the mark of sub 1 =");
    scanf("%f", &sub1);
    printf("enter the mark of sub 2 =");
    scanf("%f", &sub2);
    printf("enter the mark of sub 3 =");
    scanf("%f", &sub3);
    printf("enter the mark of sub 4 =");
    scanf("%f", &sub4);
    printf("enter the mark of sub 5 =");
    scanf("%f", &sub5);
    float sum=sub1+sub2+sub3+sub4+sub5;
    printf("The sum of a and is %.2f \n" , sum);
    float percentage =(sub1+sub2+sub3+sub4+sub5)/5;
    printf("my percentage %.2f" , percentage);
    return 0;
}

