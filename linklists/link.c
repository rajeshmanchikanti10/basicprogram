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
delete_node();
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
if(head==NULL)
{
temp=(list *)malloc(sizeof(list));
printf("enter the data:");
scanf("%d",&temp->data);
head=temp;
head->next=NULL;
i++;
}
else
{
for(temp1=head;temp1->next!=NULL;temp1=temp1->next);
temp=(list *)malloc(sizeof(list));
temp->next=NULL;
printf("enter the data:");
scanf("%d",&temp->data);
temp1->next=temp;
i++;
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
