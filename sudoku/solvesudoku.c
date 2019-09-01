bool solvesudoku(int a[][])
{
for(int num=1;i<=9;i++)
{
for(int row=0;j<9;j++)
{
for(int col=0;k<9;k++)
{
if(issolvesudoku(a,row,col,num)
{
	a[row][col]=num;
	return true;
}
return false;
}
}
}
}
bool issolvesudoku(int a[][],int row int col int num)
{
return (isrow(a,row,num)) && (iscol(a,row,num)) &&(issquare(a,row,col,num))
}

bool isrow(int a[][],int row ,int num)
{
for(int i=0;i<9;i++)
{

