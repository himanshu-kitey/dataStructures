#include "singleHeaders.h"
struct student *addatPosn(struct student *start,int posn)
{
	struct student *temp=NULL;
	struct student *ptr=NULL;
	int i=0;
	temp=(struct student *)malloc(sizeof(struct student));
	if(temp==NULL)
	{
		printf("Node not Created.\n");
	}
	else
	{
		printf("Enter Roll No.:");
		scanf("%d",&temp->roll);
		printf("Enter Name:");
		scanf("%s",temp->name);
		printf("Enter Marks:");
		scanf("%f",&temp->marks);
		if(posn==1)
		{
			temp->link=start;
			start=temp;
			return start;
		}
		ptr=start;
		for(i=1;i<posn-1 && ptr!=NULL;i++)
		{
			ptr=ptr->link;
		}
		if(ptr==NULL)
			printf("There is less then %d elements.\n",posn);
		else
		{
			temp->link=ptr->link;
			ptr->link=temp;
		}
	}
	return start;
}
