#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int roll;
	char name[10];
	float marks;
	struct student *link;
};

extern void printMenu(void);
extern struct student *inputData(struct student *);
extern struct student *displayList(struct student *);
extern void countNodes(struct student *);
extern void searchRoll(struct student *,int);
extern struct student *addatBeg(struct student *);
extern struct student *addatEnd(struct student *);
extern struct student *addafterNodes(struct student *,int);
extern struct student *addbeforeNodes(struct student *,int);
extern struct student *saveData(struct student *);
extern struct student *syncFromFile(struct student *);
