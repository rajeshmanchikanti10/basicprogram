#include<stdio.h>
int canrow(int a[9][9],int row,int num);
int cancol(int a[9][9],int col,int num);
int cansquare(int a[9][9],int row ,int col,int num);
void solvesudoku(int a[9][9]);
void printsudoku(int a[9][9]);
int isunsigned(int a[9][9],int,int);
int main()
{int i;
int a[9][9]={{3,0,6,5,0,8,4,0,0},{5,2,0,0,0,0,0,0,0},{0,8,7,0,0,0,0,3,1},{0,0,3,0,1,0,0,8,0},{9,0,0,8,6,3,0,0,5},{0,5,0,0,9,9,6,0,0},{1,3,0,0,0,0,2,5,0},{0,0,0,0,0,0,0,7,4},{0,0,5,2,0,6,3,0,0}};
solvesudoku(a);
printsudoku(a);
return 0;
}
void solvesudoku(int a[9][9])
{int num,row,col;
for(num=1;num<=9;num++)
{
for(row=0;row<9;row++)
{
for(col=0;col<9;col++)
{
if(isunsigned(a,row,col))
{
if(canrow(a,row,num) &&cancol(a,col,num) && cansquare(a,row,col,num))
a[row][col]=num;
}
}
}
}
}
int canrow(int a[9][9],int row,int num)
{
int col;

for(col=0;col<9;col++)
{
if(a[row][col]==num)
return 0;
}
return 1;
}
int cancol(int a[9][9],int col,int num)
{
int row;
for(row=0;row<9;row++)
{
if(a[row][col]==num)
return 0;
}
return 1;
}
int cansquare(int a[9][9],int row ,int col,int num)
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i+row][j+col]==num)
return 0;
}
}
return 1;
}
void printsudoku(int a[9][9])
{int i,j;
for(i=0;i<9;i++)
{
for(j=0;j<9;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
int isunsigned(int a[9][9],int row ,int col)
{
if(a[row][col]==0)
return 1;
return 0;
}


