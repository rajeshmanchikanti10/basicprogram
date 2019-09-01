#include<stdio.h>
int main()
{
int i,j,prev=2,n,count=0;
printf("\n\nenter the number:");
scanf("%d",&n);

for(i=3;i<=n;i=i+2)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if((count==2)&&(i-prev==2))
{
printf("\t%d-%d",prev,i);
prev=i;
}
count=0;
}
return 0;
}
