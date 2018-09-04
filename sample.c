#include "linkList.h"

int main()
{   
	node* list = createHead();
    printf("*Add 99, 100 and 101 to list\n");
	addNode(list, 99);
	addNode(list, 100);
	addNode(list, 101);
	dump(list);

    printf("*Delete 100 of list\n");
	delNode(list, 100);
	dump(list); 

    printf("*Delete 99 of list\n");
	delNode(list, 99);
	dump(list);

	printf("*Delete 101 of list\n");
    delNode(list, 101);
	dump(list);

	printf("*Add 200 to list\n");
	addNode(list, 200);
	dump(list);

	printf("*Delete 1000 of list\n");
    delNode(list, 1000);
	dump(list);

	printf("*Add 2001 to list\n");
	addNode(list, 2001);
	dump(list);
			
    node* testNode = list -> next -> next;
    printf("Find previous node of %d\n",testNode->value);
    
	node * prevNode = getPrev(list, testNode);
	printf("%d\n",prevNode->value);
/*
				printf("*Add 99, 100 and 101 to list\n");
				addNode(list, 99);
				addNode(list, 100);
				addNode(list, 101);
				dump(list);
*/
    printf("insert sort\n");
	insertSort(list);
    dump(list);
	freeList(list);
				
}// End of main   
