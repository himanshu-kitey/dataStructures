#include "singleHeaders.h"
struct student *saveData(struct student *ptr)
{
	FILE *fp;
	if(ptr==NULL)
	{
		printf("List is Empty.\n");
		return ptr;
	}
	fp=fopen("README.MD","w");
	if(fp==NULL)
	{
		printf("File Not Open.\n");
		return ptr;
	}
	while(ptr)
	{
		fwrite(ptr,1,sizeof(struct student)-sizeof(struct student *),fp);
		ptr=ptr->link;
	}
	printf("Data Save Sucessfully.\n");
	return ptr;
	fclose(fp);
}

struct student *syncFromFile(struct student *ptr)
{
	FILE *fp;
	struct student *temp=NULL;
	struct student *newnode=NULL;
	struct student var;	//To read record from file.
	fp=fopen("README.MD","r");
	if(fp==NULL)
	{
		//FILE not existing return ptr(NULL);
		return ptr;
	}
	else
	{
		while(fread(&var,sizeof(var)-sizeof(struct student *),1,fp)==1)
		{
			newnode=calloc(1,sizeof(struct student));
			if(newnode==NULL)
			{
				printf("Node not Created.\n");
				return ptr;
			}
			newnode->roll=var.roll;
			strcpy(newnode->name,var.name);
			newnode->marks=var.marks;
			if(ptr==NULL)
			{
				ptr=newnode;
			}
			else
			{
				for(temp=ptr;temp->link;temp=temp->link);
				temp->link=newnode;
			}
		}
	}
	return ptr;
	fclose(fp);
}
