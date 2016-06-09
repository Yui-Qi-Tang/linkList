#include "linkList.h"

void main()
{   
				node* list = createHead();
    printf("Add 99, 100 and 101 to list\n");
				addNode(list, 99);
				addNode(list, 100);
				addNode(list, 101);
				dump(list); 
				freeList(list);
				
}// End of main   
