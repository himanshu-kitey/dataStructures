#include "singleHeaders.h"
void displayList(struct student *ptr)
{
	if(ptr==NULL)
	{
		printf("List is Empty.\n");
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
}

