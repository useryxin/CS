#include <stdio.h>

typedef int DataType;                                        //定义 数据域类型
#define MaxStackSize 64                                      //定义 数据域数组 最大长度
#define OK 1                      
#define ERROR 0                                         


typedef struct
{ 
	DataType stack[MaxStackSize];                       // 定义一个 结构体数组
	int top;                                            // 定义 栈顶 的高度
}SeqStack;


void StackInit(SeqStack *S)                                 // 初始化, 栈高度为0
{
	S->top = 0;
}


int StackIsEmpty(SeqStack *S)                                // 判断是否 栈空
{
	if (S->top <= 0)
      {
            printf("栈为空！！！");
		return ERROR;
      }
	else
  {
		return OK;
  }
}


int StackPush(SeqStack *S, DataType x)                       // 入栈
{
	if (S->top >= MaxStackSize)                          // 判断 栈的高度>=宏定义 的 最大容纳
	{	
            printf("栈满，无法进栈！！！\n");
		return ERROR;
	}
	else
	{
		S->stack[S->top] = x;                        // 将x赋值给 结点S 的 数组中
		S->top++;                                    // 执行一次，top+1
		return OK
	}
}
 

int StackPop(SeqStack *S, DataType *x)                       // 出栈
{
	if (S->top <= 0)                                     // 先判断 top 是否为 空
	{
		printf("堆栈已空，无法出栈！！！\n");
		return ERROR;
	}
	else                        
	{ 
		S->top--;                                    // S结构体 下的 top 获取 栈顶至栈底 的下标
		*x = S->stack[S->top];                       // 通过 指针 获取数据，返回 相应值
		return OK;  
	}
}


int StackGetTop(SeqStack *S, DataType *x)                    // 获取 栈顶 元素
{
	if (S->top <= 0)                                     // 先判断 top 是否为 空
	{
		printf("堆栈已空！！！\n");
			return ERROR;
	}
	else
	{
		*x = S->stack[S->top - 1];                   // 找到 数组栈顶 的 下标 [top-1]
		return 1;
	}
}


int main()
{
	SeqStack myStack;
	int i, x;
	StackInit(&myStack);
	for (i = 0; i < 10; i++)
      {
		StackPush(&myStack, i + 1);
      }
	StackGetTop(&myStack, &x);
	printf("当前栈顶元素为：%d\n", x);
	printf("依次出栈：");
	while (StackIsEmpty(&myStack))
	{
		StackPop(&myStack, &x);
		printf("%d\t", x);
	}
	printf("\n");
	return 0;
}
