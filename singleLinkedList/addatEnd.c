#include "singleHeaders.h"
struct student *addatEnd(struct student *start)
{
	struct student *temp;
	struct student *ptr;
	temp=(struct student *)malloc(sizeof(struct student));
	if(temp==NULL)
	{
		printf("List is Empty.\n");
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
		ptr=start;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		ptr->link=temp;
		temp->link=NULL;
		return start;
	}
}
