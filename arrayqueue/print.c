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
		printf("%d ��° ���� ����Ʈ ���Դϴ�. \n ", Dequeue(&queue1));
	}

	printf("\n ��� ������ ����Ʈ �Ǿ����ϴ�.");


	return 0;


	

}