#include "singleHeaders.h"
struct student *displayList(struct student *ptr)
{
	if(ptr==NULL)
	{
		printf("List is Empty.\n");
		return ptr;
	}
	printf("List is:\n");
	while(ptr!=NULL)
	{
		printf("Roll No.:");
		printf("%d ",ptr->roll);
		printf("\tName :");
		printf("%s",ptr->name);
		printf("\tMarks:");
		printf("%f\n",ptr->marks);
		ptr=ptr->link;
	}
	printf("\n");
	return ptr;
}

