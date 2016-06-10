#ifndef __Link_List_H__
#define __Link_List_H__

#include "stdio.h"
#include "stdlib.h"

typedef struct NODE
{
    int value;
				struct NODE *next;
}node;
typedef unsigned char false;
typedef unsigned char true;
#define true 0x1
#define false 0x0


node* createHead();
void freeList(node*);
void addNode(node*, int);
void delNode(node*, int);
void insertSort(node*);
node* getPrev(node*, node*);
void dump(node*);
unsigned char isExist(node*, int);

#endif // __Link_List_CORE_H__
