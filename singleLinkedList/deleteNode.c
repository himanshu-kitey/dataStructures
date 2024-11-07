#include "singleHeaders.h"
struct student *deleteNode(struct student *start,int data)
{
	struct student *temp=NULL;
	struct student *ptr=NULL;
	if(start==NULL)
	{
		printf("List is Empty.\n");
		return start;
	}
	if(data==start->roll)
	{
		temp=start;
		start=start->link;
		free(temp);
		printf("Record Deleted Sucessfully.\n");
		return start;
	}
	ptr=start;
	while(ptr->link!=NULL)
	{
		if(data==ptr->link->roll)
		{
			temp=ptr->link;
			ptr->link=temp->link;
			free(temp);
			printf("Record Deleted Successfully.\n");
			return start;
		}
		ptr=ptr->link;
	}
	printf("Roll No. %d is not Found.\n",data);
	return start;
}

