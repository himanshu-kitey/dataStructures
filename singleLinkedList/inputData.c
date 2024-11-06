#include "singleHeaders.h"
/* To Display List Data*/

struct student *inputData(struct student *ptr)
{
	struct student *temp=NULL;
	struct student *newnode=NULL; 
	newnode=calloc(1,sizeof(struct student));

	if(newnode==NULL)
	{
		printf("Node not Created.\n");
		return ptr;
	}
	else
	{
		printf("Enter the rollno:");
		scanf("%d",&newnode->roll);
		printf("Enter the name:");
		scanf("%s",newnode->name);
		printf("Enter the Marks:");
		scanf("%f",&newnode->marks);
		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			for(temp=ptr;temp->link;temp=temp->link);
			temp->link=newnode;
		}
	}
	return ptr;
}

