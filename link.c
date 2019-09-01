#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
int data;
struct Node *next;
}node;
int main()
{node *head=NULL,*temp=head,*temp1,*tmp;
int n,i=0,data;
printf("enter the length of linklist:");
scanf("%d",&n);
while(i<n)
{
(temp=malloc(sizeof(node)));
printf("enter the data:\n");
scanf("%d",&data);
if(head==NULL)
{
head=temp;
temp->next=NULL;
}
else
{
for(temp1=head;temp1!=NULL;temp1=temp1->next);
temp1=temp;
temp1->next=NULL;
}
i++;
}
while((temp)!=NULL)
{
if((temp->next)==NULL)
{temp1=temp;
break;
}
tmp=temp->next;
temp->next=temp1;
temp1=temp;
temp=tmp;
}
head=temp1;
for(temp=head;temp!=NULL;temp=temp->next)
printf("%d\n",temp->data);

return 0;
}