/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Node //노드 정의
{
	int data;
	struct Node *next;
	struct Node *prev;
}Node;

typedef struct Stack //Stack 구조체 정의
{
	Node *top;    //맨 앞 노드(가장 최근에 생성한 노드)
	Node *back;
	int size;
}Stack;

//----------------------------------------------------------함수
void InitStack(Stack *stack) //스택 초기화
{
	stack->top = NULL; //스택 초기화에서는 top을 NULL로 설정
	stack->back = NULL;
	stack->size = 0;
}
void printSize(Stack *stack)
{
	printf("%d\n", stack->size);
}
int IsEmpty(Stack *stack) //스택 비어있는지확인
{
	if (stack->top == NULL)
		return 1;
	else
		return 0;    //top이 NULL이면 빈 상태    
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
	Node *now = (Node *)malloc(sizeof(Node)); //노드 생성
	now->data = data;//데이터 설정

	if (IsEmpty(stack))
	{
		now->next = NULL;
		stack->top = now;
	}
	else 
	{
		now->next = stack->back;//now의 next링크를 현재 back으로 설정
		now->next->prev = now; //now는 now 다음 노드의 '이전' 으로 설정
	}
	now->prev = NULL; //이전은 NULL
	stack->back = now;   //스택의 back은 now로 설정
	stack->size++;
}
int Pop(Stack *stack) //맨 마지막 노드 제거
{
	Node *now;
	int re;
	if (IsEmpty(stack))
	{
		return -1;
	}
	now = stack->top;//now를 top으로 설정
	re = now->data;//꺼낼 값은 now의 data로 설정

	stack->top = now->prev;//top을 now의 next로 설정
	stack->size--; //size 줄임
	free(now);//필요없으니 메모리 해제
	return re;
}
int main()
{
	int n;//개수
	int i;
	char str[10];//명령 받을 문자열
	int num; //push받을 

	Stack stack;
	InitStack(&stack); //stack생성

	scanf("%d", &n); //숫자 입력
	getchar();

	if ((n >= 1) && (n <= 10000))//범위제한
	{
		for (i = 0; i < n; i++)
		{
			scanf("%s", str);

			if (!strcmp(str, "push")) //push와 같다면
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