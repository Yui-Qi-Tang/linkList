#include "stdio.h"
#include "stdlib.h"

typedef struct NODE
{
    int value;
				struct NODE *next;
}node;


void dump(node* head)
{
    node *iterator = head;
    while(iterator != NULL)
				{
				    printf("%d\n",iterator->value);
								iterator = iterator->next;
				}
				printf("NULL");
}

/*Add new Node to tail of list */
void addNode(node* listHead, int valueOfNewNode)
{
    /*Create new node instance*/
    node *newNode = malloc(sizeof(node));
				/*Set new value for new node from external*/
				newNode->value=valueOfNewNode;

    /*Pointer to head of list*/
				node *pCurt = listHead; // Curt = current
				/*Pointer to next of head of list*/
				node *pCurtNext = listHead->next;
    /*Move pCurt and pCurtNext until pNext is NULL*/
				while(pCurtNext != NULL)
				{
				    pCurt = pCurtNext;
								pCurtNext = pCurtNext->next;
				}
				/*next of new node is pNext, because pNext point to NULL now.*/
				newNode->next = pCurtNext;
				/*Add new node for pHead->next*/
    pCurt->next = newNode;

}

void main()
{   
				node *list = malloc(sizeof(node));
				list -> value = 0;
				list -> next = NULL;


				addNode(list, 99);
				addNode(list, 100);
				addNode(list, 101);
    
				dump(list);
				    
}
