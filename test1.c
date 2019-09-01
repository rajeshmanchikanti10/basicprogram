#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=1,b=2,c=3;
if(a>b)
{
printf("a");
exit(0);
}
else if (b>c)
{
printf("b");
exit(1);
}
else
{
printf("c");
exit(2);
}
return 0;
}