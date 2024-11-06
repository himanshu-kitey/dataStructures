#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll;
	char name[10];
	float marks;
	struct student *link;
};

extern void printMenu(void);
extern struct student *inputData(struct student *ptr);
extern void displayList(struct student *ptr);
extern void countNodes(struct student *ptr);
extern void searchRoll(struct student *ptr,int data);
extern struct student *addatBeg(struct student *start);
extern struct student *addatEnd(struct student *start);
extern struct student *addafterNodes(struct student *start,int roll);
extern struct student *addbeforeNodes(struct student *start,int roll);
