#include "singleHeaders.h"
int main(void)
{
	struct student *head=NULL;
	int choice;	int data;
	int posn;
//	head=syncFromFile(head);	//Reading From FILE.
	while(1)
	{
		printMenu();
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=inputData(head);
			       break;
			case 2:displayList(head);
			       break;
			case 3:countNodes(head);
			       break;
			case 4:
			       printf("Enter Roll No. to be Search:");
			       scanf("%d",&data);
			       searchRoll(head,data);
			       break;
			case 5:
			      head=addatBeg(head);
			      break;
			case 6:
			      head=addatEnd(head);
			      break;
			case 7:
			      printf("Enter the roll:");
			      scanf("%d",&data);
			      head=addafterNodes(head,data);
			      break;
			case 8:
			      printf("Enter the roll:");
			      scanf("%d",&data);
			      head=addbeforeNodes(head,data);
			      break;
			case 9:
			      head=saveData(head);
			      break;
			case 10:
			      head=addSorted(head);
			      break;
			case 11:
			      printf("Enter the Posn:");
			      scanf("%d",&posn);
			      head=addatPosn(head,posn);
			      break;
			case 12:
			      printf("Enter Roll No. To be Delete:");
			      scanf("%d",&data);
			      head=deleteNode(head,data);
			      break;
			case 13:
			      head=reverseNodes(head);
			      break;
			case 14:exit(1);

			default:
			       printf("Wrong Choice.\n");
			       return 0;
		}

	}
}

