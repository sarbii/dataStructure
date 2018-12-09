#include<stdio.h>
#include<stdlib.h>
#include"queue.h"


int main()
{
	Queue* queue1 ;

	QueueInit(&queue1);

	Enqueue(&queue1, 1);
	Enqueue(&queue1, 2);
	Enqueue(&queue1, 3);
	Enqueue(&queue1, 4);

	while (!QIsEmpty(&queue1))

	{
		printf("%d 번째 문서 프린트 중입니다. \n ", Dequeue(&queue1));
	}

	printf("\n 모든 문서가 프린트 되었습니다.");


	return 0;


	

}