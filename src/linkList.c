/**
 *  @file       linkList.c
 *  @brief      Defines Application 
 *  @author     Yui Qi Tang (yqtang1222@gmail.com)
 *  @date       06/09/2016 created.
 *  @date       06/09/2016 last modified.
 *  @version    0.01
 *  @section    License
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of
 *  the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details at
 *  http://www.gnu.org/copyleft/gpl.html
 *
 *  @section DESCRIPTION
 *
 *  Link list functions
 **/


#include "linkList.h"

/**
 *  create head for list
 *
 *  @param          none.
 *  @return         node*
 *  @see
 *  @since          0.01
 **/
node* createHead(){
    node *head = malloc(sizeof(node));
				head -> value = 123456;
				head -> next = NULL;
				return head;    
}// End of createHead()

/**
 *  Print value of each node of specify list
 *
 *  @param          node*
 *  @return         none.
 *  @see
 *  @since          0.01
 **/

void dump(node* head)
{
    node *iterator = head->next;
				printf("Head -> ");
    while(iterator != NULL)
				{
				    printf("%d -> ",iterator->value);
								iterator = iterator->next;
				}
				printf("Tail\n");
}// End of dump()



/**
 *  free list
 *
 *  @param          node*
 *  @return         none.
 *  @see
 *  @since          0.01
 **/
void freeList(node *list)
{
    node *tmp;

				while(list != NULL)
				{
				    tmp = list;
				    list = list -> next;
				    free(tmp);				
				}
}// End of freeList()



/**
 *  Add new Node to specify list 
 *
 *  @param          node*, int
 *  @return         none.
 *  @see
 *  @since          0.01
 **/
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

}// End of addNode

/**
 *  Delete Node from specify list 
 *
 *  @param          node*, int
 *  @return         none.
 *  @see
 *  @since          0.01
 **/

void delNode(node* listHead, int target)
{
				node* prev = listHead;
    node* curt = prev->next;
    //printf("%p,%p \n", prev, curt); 
				while(curt  != NULL)
				{
				    if(curt -> value == target){
					       prev -> next = curt -> next;					
												free(curt);
												return;
								}
								prev = curt;
								curt = curt -> next;
				}
				printf("%d does not in list\n", target);
		

}// End of delNode



/**
 *  Check whether the specify valus is exist specify list or not.
	*  Note : Because there is no bool data type in C,
 *         so I use unsigned char to present bool
 *  
 *  @param          node*, int
 *  @return         unsigned char.
 *  @see
 *  @since          0.01
 **/
unsigned char isExist(node *list,int target)
{
    //Init. pointer at head of list
				node* head = list -> next;
				
				while(head  != NULL)
				{
								//Check whether the target is exist or not
								//if exist return true
								//otherwise go next node of list
				    if(head -> value == target)
								{
								    return true;
								}
								//next node of list
								head = head->next;
				}//fi
				//not exist
				return false;
}// End of isExist


/**
 *  Insert sort algorithm
 *  
 *  @param          node*
 *  @return         none.
 *  @see
 *  @since          0.01
 **/
void insertSort(node* listHead)
{
    if(listHead -> next = NULL)
				{
				    printf("This list is empty");
								return;
				}
    node *i;
				node *j = listHead -> next -> next;
    int key;
				while(j != NULL)
				{
        key = j -> value;
        
				}

}// End of insertSort()

/**
 *  Get previous node in target of list
 *  
 *  @param          node*, node*
 *  @return         none.
 *  @see
 *  @since          0.01
 **/
node* getPrev(node* list, node* target)
{
				if(target == list)
				{
				    return NULL;
				}
    node* i = list;
				while(i != NULL)
				{
				    if(i -> next == target)
								{
								    return i;
								}
								i = i -> next;
				}
				return NULL;
}
