/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Node //��� ����
{
	int data;
	struct Node *next;
	struct Node *prev;
}Node;

typedef struct Stack //Stack ����ü ����
{
	Node *top;    //�� �� ���(���� �ֱٿ� ������ ���)
	Node *back;
	int size;
}Stack;

//----------------------------------------------------------�Լ�
void InitStack(Stack *stack) //���� �ʱ�ȭ
{
	stack->top = NULL; //���� �ʱ�ȭ������ top�� NULL�� ����
	stack->back = NULL;
	stack->size = 0;
}
void printSize(Stack *stack)
{
	printf("%d\n", stack->size);
}
int IsEmpty(Stack *stack) //���� ����ִ���Ȯ��
{
	if (stack->top == NULL)
		return 1;
	else
		return 0;    //top�� NULL�̸� �� ����    
}
void printFront(Stack *stack)
{
	if (IsEmpty(stack))
		printf("-1\n");
	else
		printf("%d\n", stack->top->data);
}
void printBack(Stack *stack)
{
	if (IsEmpty(stack))
		printf("-1\n");
	else
		printf("%d\n", stack->back->data);
}
void Push(Stack *stack, int data)
{
	Node *now = (Node *)malloc(sizeof(Node)); //��� ����
	now->data = data;//������ ����

	if (IsEmpty(stack))
	{
		now->next = NULL;
		stack->top = now;
	}
	else 
	{
		now->next = stack->back;//now�� next��ũ�� ���� back���� ����
		now->next->prev = now; //now�� now ���� ����� '����' ���� ����
	}
	now->prev = NULL; //������ NULL
	stack->back = now;   //������ back�� now�� ����
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

	stack->top = now->prev;//top�� now�� next�� ����
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
				getchar();
				if((num>=1)&&(num<=100000))
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
			else if (!strcmp(str, "front"))
			{
				printFront(&stack);
			}
			else if (!strcmp(str, "back"))
			{
				printBack(&stack);
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