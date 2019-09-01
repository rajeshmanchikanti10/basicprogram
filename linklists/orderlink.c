#include<stdio.h>
#include<stdlib.h>

void append_node(void);
void display_node(void);
void free_node(void);
typedef struct link
{
int data;
struct link *next;
}list;
list *head;
int main()
{
append_node();
display_node();
free_node();

return 0;
}
void append_node(void)
{list *temp,*temp1;
int i=0,n;
printf("enter the size of list:");
scanf("%d",&n);
while(i<n)
{
temp=(list *)malloc(sizeof(list));
printf("enter the data:");
scanf("%d",&temp->data);
if(head==NULL)
{
head=temp;
temp->next=NULL;
}
else
{temp1=head;
while(temp1!=NULL)
{
if(temp->data<temp1->data)
{
temp->next=temp1;
head=temp;
}
temp1=temp1->next;
}
temp1->next=NULL;
}
}
}
void display_node(void)
{list *temp;
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d\n\n",temp->data);
}
}
void free_node(void)
{
list *temp,*temp1;
/*while(temp!=NULL)
{temp1=temp;
temp=temp->next;
free(temp1);
printf("\n\nnode is freed");
}*/
for(temp=head;temp!=NULL;temp=temp->next)
{temp1=temp;
free(temp1);
printf("\n\nnode is freed");
}
}
