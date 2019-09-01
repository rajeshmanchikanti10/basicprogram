#include<stdio.h>
#include<stdlib.h>
typedef struct d{
int data;
struct d *next;
}del;
del *head;
void delete_node_without_head(del *);
int  append_node(void);
void display_node(void);
void free_node(void);
int main()
{int size,data,i;
del *temp;
size=append_node();
printf("linklist before deletion of node\n\n");
display_node();
printf("enter the node u want to delete from the given linklist:");
scanf("%d",&data);
for(i=0,temp=head;temp!=NULL;i++,temp=temp->next)
{
if(data==temp->data)
delete_node_without_head(temp);
}
printf("linklist after deletion of node");
display_node();
free_node();
return 0;
}
int append_node(void)
{del *temp,*temp1;
int i=0,n;
printf("enter the size of list:");
scanf("%d",&n);
while(i<n)
{
if(head==NULL)
{
temp=(del *)malloc(sizeof(del));
printf("enter the data:");
scanf("%d",&temp->data);
head=temp;
head->next=NULL;
i++;
}
else
{
for(temp1=head;temp1->next!=NULL;temp1=temp1->next);
temp=(del *)malloc(sizeof(del));
temp->next=NULL;
printf("enter the data:");
fflush(stdin);
scanf("%d",&temp->data);
temp1->next=temp;
i++;
}
}
return n;
}
void delete_node_without_head(del *dele)
{	del * temp=dele->next;
	if(dele==NULL)
		{
		 printf("there is no node in the specified address");
		}
	else
		{
			if(temp==NULL)
				
					printf("this is last node\n");
				
			
			dele->data=dele->next->data;
			dele->next=dele->next->next;
			free(temp);
			printf("\n\nnode has been freed\n\n");
				
		}
}
void display_node(void)
{del *temp;
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("\n%d\n\n",temp->data);
}
}
void free_node(void)
{
del *temp,*temp1;
while(temp!=NULL)
{temp1=temp;
temp=temp->next;
free(temp1);
printf("\n\nnode is freed");
}
/*for(temp=head;temp!=NULL;temp=temp->next)
{temp1=temp;
free(temp1);
//printf("\n\nnode is freed\n\n");
}*/
}
