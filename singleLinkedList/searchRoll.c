#include "singleHeaders.h"
void searchRoll(struct student *start,int data)
{
	struct student *ptr=start;
	int posn=1;
	while(ptr!=NULL)
	{
		if(ptr->roll==data)
		{
			printf("Roll No. %d found at Posn:%d\n",data,posn);
			printf("Data is:\n----------");
			printf("\nRoll No.:%d\t",ptr->roll);
			printf("Name: %s\t",ptr->name);
			printf("Marks:%f\n",ptr->marks);
			return;
		}
		ptr=ptr->link;
		posn++;
	}
	printf("Roll No. %d not found in list\n",data);
}
