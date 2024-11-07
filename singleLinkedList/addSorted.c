#include "singleHeaders.h"
struct student *addSorted(struct student *ptr)
{
	struct student *newnode=NULL;
	struct student *temp=NULL;
	struct student *prev=NULL;
	newnode=calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("Node not created.\n");
		return ptr;
	}
	else
	{
		printf("Enter Roll No.:");
		scanf("%d",&newnode->roll);
		printf("Enter Name:");
		scanf("%s",newnode->name);
		printf("Enter Marks:");
		scanf("%f",&newnode->marks);
		if(ptr==NULL || newnode->roll < ptr->roll)
		{
			newnode->link=ptr;
			ptr=newnode;
		}
		else
		{
			prev=ptr;
			temp=ptr->link;
			while(temp && newnode->roll > temp->roll)
			{
				prev=temp;
				temp=temp->link;
			}
			prev->link=newnode;
			newnode->link=temp;
		}
		return ptr;
	}



}
