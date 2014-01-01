#include<stdio.h>
#include<stdlib.h>


//defining the node structure 

typedef struct node
{
  int data;
  struct node* next;
}node;


// defining push and pop funcions to push and pop data 

void push(node **head,int data)
{
    
    struct node* temp1 = (node*)malloc(sizeof(node));
    temp1->data = data;
    temp1->next = *head;
    *head = temp1;
}

int pop(node **head)
{
	if(head == NULL)
	{
		return -1;
	}
	else
	{
		int data = (*head)->data;

		struct node* tmp = *head;
		*head = tmp->next;
		free(tmp);
		return data;
	}
}


// inv function to inverse linked list using recursion 

void inv(node  *p,node **head)
{
	if(p->next == NULL)
	{
		*head = p;
		return;
	}
 	inv(p->next,head);
	struct node* q = (node*)malloc(sizeof(node));
	q = p->next;
	q->next = p;
	p->next = NULL;
}



main()
{
  //example pushing 1,2,3 
  
	struct node* head = NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);

	struct node* p = head;
	inv(p,&head);

  //printing the revesed linked list 
  
	struct node* tmp = head;
	while (tmp !=NULL)
	{
		printf(" \n data = %i \n",tmp->data);
		tmp = tmp->next;
	}
}
