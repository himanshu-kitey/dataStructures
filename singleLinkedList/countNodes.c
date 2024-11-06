#include "singleHeaders.h"
void countNodes(struct student *ptr)
{
	static int cnt=0;
	while(ptr!=NULL)
	{
		ptr=ptr->link;
		cnt++;
	}
	printf("Number of Nodes are:%d\n",cnt);
}
