#include<stdio.h>
int main()
{
int grid[9][9]={{3,0,6,5,0,8,4,0,0},{5,2,0,0,0,0,0,0,0},{0,8,7,0,0,0,0,3,1},{0,0,3,0,1,0,0,8,0},{9,0,0,8,6,3,0,0,5},{0,5,0,0,9,9,6,0,0},{1,3,0,0,0,0,2,5,0},{0,0,0,0,0,0,0,7,4},{0,0,5,2,0,6,3,0,0}};
int i;
printf("sudoku before solving\n");
for(i=0;i<9;i++)
{
for(int j=0;j<9;j++)
{printf("\t%d",grid[i][j]);
}
printf("\n\n");
}
label:
for(int k=1;k<=9;k++)
{
for(i=1;i<=9;i++)
{
if(grid[k][i]==k)
{
goto label;
}
else
{
grid[k][i]=k;
}
}
printf("\n\n");
}printf("\n sudoku after solving\n");
for(i=0;i<9;i++)
{
for(int j=0;j<9;j++)
{printf("\t%d",grid[i][j]);
}
printf("\n\n");
}
return 0;
}