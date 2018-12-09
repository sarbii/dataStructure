#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"heapadt.h"

int main()
{
	int maxHeapSize = 20;
	ArrayMaxHeap *heap1 = NULL;
	HeapNode *pNode = NULL;

	heap1 = createArrayMaxHeap(maxHeapSize);
	
	insertMaxHeapAH(heap1, 1);
	insertMaxHeapAH(heap1, 4);
	insertMaxHeapAH(heap1, 9);
	insertMaxHeapAH(heap1, 16);
	insertMaxHeapAH(heap1, 25);
	
	printf("Max Heap:\n");
	displayArrayHeap(heap1);

	insertMaxHeapAH(heap1, 18);
	printf("insert 18\n");
	printf("Max Heap:\n");
	displayArrayHeap(heap1);

	pNode = deleteMaxHeapAH(heap1);
	
	printf("deleteMaxHeap \n", pNode->data);
	free(pNode);
	

	printf("Max Heap:\n");
	displayArrayHeap(heap1);

	deleteArrayMaxHeap(heap1);
	

	return 0;
}
