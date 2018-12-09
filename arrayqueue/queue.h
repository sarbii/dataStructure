#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define QUE_LEN 100
typedef int Data;

typedef struct _cQueue
{
	int front;
	int rear;
	Data queArr[QUE_LEN];
}CQueue;

typedef CQueue Queue;

void QueueInit(Queue* pq);


void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);


int NextPosIdx(int pos)
{
	if (pos == QUE_LEN - 1)
		return 0;
	else
		return pos + 1;
}

void QueueInit(Queue* pq)
{
	pq->front = 0;
	pq->rear = 0;
}

bool QIsEmpty(Queue* pq)
{
	if (pq->front == pq->rear)
		return true;
	else
		return false;
}

void Enqueue(Queue* pq, Data data)
{
	if (NextPosIdx(pq->rear) == pq->front)
	{
		printf("Queue Memory Error!!");
		exit(-1);
	}
	pq->rear = NextPosIdx(pq->rear);
	pq->queArr[pq->rear] = data;


}

Data Dequeue(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!!");
		exit(-1);
	}
	pq->front = NextPosIdx(pq->front);
	return pq->queArr[pq->front];

}

Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);

	}
	return pq->queArr[NextPosIdx(pq->front)];

}
