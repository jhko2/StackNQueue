/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Node //��� ����
{
	int data;
	struct Node *next;
}Node;

typedef struct Stack //Stack ����ü ����
{
	Node *top;    //�� �� ���(���� �ֱٿ� ������ ���)
	int size;
}Stack;

//----------------------------------------------------------�Լ�
void InitStack(Stack *stack) //���� �ʱ�ȭ
{
	stack->top = NULL; //���� �ʱ�ȭ������ top�� NULL�� ����
	stack->size = 0;
}
void printSize(Stack *stack)
{
	printf("%d\n", stack->size);
}
int IsEmpty(Stack *stack) //���� ����ִ���Ȯ��
{
	return stack->top == NULL;    //top�� NULL�̸� �� ����    
}
void printTop(Stack *stack)
{
	if (stack->top == NULL)
		printf("-1\n");
	else
		printf("%d\n", stack->top->data);
}
void Push(Stack *stack, int data)
{
	Node *now = (Node *)malloc(sizeof(Node)); //��� ����
	now->data = data;//������ ����
	now->next = stack->top;//now�� next��ũ�� ���� top���� ����   
	stack->top = now;   //������ �� ���� now�� ����
	stack->size++;
}
int Pop(Stack *stack) //�� ������ ��� ����
{
	Node *now;
	int re;
	if (IsEmpty(stack))
	{
		return -1;
	}
	now = stack->top;//now�� top���� ����
	re = now->data;//���� ���� now�� data�� ����

	stack->top = now->next;//top�� now�� next�� ����
	stack->size--; //size ����
	free(now);//�ʿ������ �޸� ����
	return re;
}
int main()
{
	int n;//����
	int i;
	char str[10];//��� ���� ���ڿ�
	int num; //push���� 

	Stack stack;
	InitStack(&stack); //stack����

	scanf("%d", &n); //���� �Է�
	getchar();

	if ((n >= 1) && (n <= 10000))//��������
	{
		for (i = 0; i < n; i++)
		{
			scanf("%s", str);

			if (!strcmp(str, "push")) //push�� ���ٸ�
			{
				scanf("%d", &num);
				Push(&stack, num);
			}
			else if (!strcmp(str, "size"))
			{
				printSize(&stack);
			}
			else if (!strcmp(str, "empty"))
			{
				int temp;
				temp = IsEmpty(&stack);
				printf("%d\n", temp);
			}
			else if (!strcmp(str, "top"))
			{
				printTop(&stack);
			}
			else if (!strcmp(str, "pop"))
			{
				int temp;
				temp = Pop(&stack);
				printf("%d\n", temp);
			}
		}
	}
	return 0;
}*/