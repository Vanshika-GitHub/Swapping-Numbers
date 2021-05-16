#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
printf("Enter the two values to swap:\n");
scanf("%d,%d",&a,&b);
printf("Before swapping a=%d , b = %d", a , b);
a =a+b ;
b = a-b;
a = a-b ; 
printf("\n After swapping a=%d, b=%d",a,b);
return 0;
}
