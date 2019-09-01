#include<stdio.h>
int main()
{
int x,y;
printf("enter two numbers in octal:");
scanf("%o%o",&x,&y);
printf("the addition of %o and %o is:%d",x,y,x+y);
return 0;
}