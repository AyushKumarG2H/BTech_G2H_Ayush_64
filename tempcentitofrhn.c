#include <stdio.h>
#include <math.h>
int main()
{ float c;
printf("enter the value of temp in centigrade = ");
scanf("%f", &c);
float fahr = (c*1.8)+32;
printf("%f", fahr);
return 0 ;
}