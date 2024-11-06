#include "singleHeaders.h"
struct student *addafterNodes(struct student *start,int roll)
{
	struct student *temp;
	struct student *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->roll==roll)
		{
			temp=(struct student *)malloc(sizeof(struct student));
			printf("Enter Roll:");
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
	printf("%d is not present in the list\n",roll);
	return start;
}
