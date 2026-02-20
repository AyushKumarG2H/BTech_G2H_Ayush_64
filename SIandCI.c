#include<stdio.h>
#include<math.h>
int main()
{ float p,r,t;
printf("enter the Principal amount = ");
scanf("%f" ,&p);
printf("enter the Rate of interest =");
scanf("%f", &r);
printf("enter the Time =");
scanf("%f", &t);
float SI = (p*r*t)/100;
printf("%f",SI);
return 0;
}