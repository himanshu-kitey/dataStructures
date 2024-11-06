#include "singleHeaders.h"
struct student *addbeforeNodes(struct student *start,int roll)
{
	struct student *temp;
	struct student *ptr;
	if(start==NULL)
	{
		printf("List is Empty.\n");
		return start;
	}
	if(roll==start->roll)
	{
		temp=(struct student *)malloc(sizeof(struct student));
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
	
	ptr=start;
	while(ptr->link!=NULL)
	{
		if(roll==ptr->link->roll)
		{
			temp=(struct student *)malloc(sizeof(struct student));
			printf("Enter Roll No.:");
			scanf("%d",&temp->roll);
			printf("Enter Name:");
			scanf("%s",temp->name);
			printf("Enter Marks:");
			scanf("%f",&temp->marks);
			temp->link=ptr->link;
			ptr->link=temp;
			return start;
		}
		ptr=ptr->link;
	}	
	printf("%d is not present in the list.\n",roll);
	return start;
	
}
