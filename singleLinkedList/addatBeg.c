#include "singleHeaders.h"
struct student *addatBeg(struct student *start)
{
	struct student *temp=NULL;
	temp=(struct student *)malloc(sizeof(struct student));
	
	if(temp==NULL)
	{
		printf("Node not creared.\n");
		return start;
	}
	else
	{
		printf("Enter Roll No.:");
		scanf("%d",&temp->roll);
		printf("Enter Name:");
		scanf("%s",temp->name);
		printf("Enter Marks:");
		scanf("%f",&temp->marks);
		temp->link=start;
		start=temp;
		return start;
	}
}
