#include "singleHeaders.h"
struct student *reverseNodes(struct student *start)
{
	struct student *prev=NULL;
	struct student *ptr=NULL;
	struct student *next=NULL;
	prev=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	start=prev;
	return start;
}
