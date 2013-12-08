#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
	int data;
	struct node* next;
}node;


void push(node** head,int data);
int  pop(node** head);



main()
{

	struct node* head;
	head = NULL;
	push(&head,1);
	push(&head,2);
	
	printf("\n this is good !\n");
	struct node* temp = head;
	while (temp !=NULL)
	{
		printf("\n data = %i \n",temp->data);
		temp =temp->next;
	}
	

}


void push(node** head,int data)
{
	struct node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = *head;
	*head = temp;
}


// poping out function
int pop(node** head)
{
	if (*head !=NULL)
	{


	struct node* temp = *head;
	int data = (*head)->data;
	*head = (temp)->next;
	free(temp);
	return data;
    }
    else
    {
    	return -1;
    }
}


