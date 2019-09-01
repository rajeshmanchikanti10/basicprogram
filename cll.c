/*mainporgram.c*/
#include<stdio.h>
#include<stdlib.h>
#include "student.h"
Student_list *create_node(void)
{
Student_list *node;
if((node=malloc(sizeof(Student_list)))!=NULL)
node->next=NULL;
}
int main(int argc ,char **argv)
{
Student_list *head=NULL,*tmp;
char choice;
char opt;
short pos;
short l_len;
if((tmp=create_node())==NULL)
{
printf("cant create a node\n");
exit(1);
}
head=tmp;
get_data(head);
while(1)
{
printf("key in your choice i-insert d-delete s-show q-quit r reverse:");
scanf("%c",&choice);
if(choice=='q')
 break;
switch(choice)
{
case 'i':
printf("position in the list to insert:");
scanf("%d",&pos);
l_len=getlistlength(head);
printf("%d\n",l_len);
if(pos>=1&&pos<=l_len)
{
if((tmp=create_node())==NULL)
{
printf("cant create a node:");
exit(1);
}
get_data(tmp);
head=insertnode(head,tmp,pos);
}
else
printf("invalid position entered\n");
break;
case 'd':
printf("position to delete node in list:");
l_len=getlistlength(head);
if(pos>=1&&pos<=l_len)
{
head=deletenode(head,pos);
}
else 
printf("invalid position entered\n");
break;
case 's':
show_list(head);
break;
default:
break;
}
}
delete_list(head);
return 0;
}
