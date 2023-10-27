#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
typedef int DataType;                                      // 重定义一个 数据域，方便可以 快速更改
typedef struct snode
{
	DataType data;                                     // 数据域
	struct snode *next;                                // 指针域
}LSNode;                                                   // struct snode 别名

                                                                
int StackInit(LSNode **top)                                // 初始化栈                  
{
	*top = (LSNode *)malloc(sizeof(LSNode));           // 分配了一段和 LSNode 相同类型与大小的 内存
	(*top)->next = NULL;                               // 指针 初始化
	if(top!=NULL)
	{
		printf("分配成功！！！");
		return OK;
	}
	else
	{
		printf("分配失败！！！");
		return ERROR;
	}
}


int StackIsEmpty(LSNode *top)                             // 判断 堆栈 是否为 空                   
{
	if (top->next == NULL)                            // 判断 头结点 下一结点 是否为 空，
	{
		return ERROR;
	}
	else
	{
		return OK;
	}
}


void StackPush(LSNode *top, DataType x)                   // 入栈
{
	LSNode *p;
	p = (LSNode *)malloc(sizeof(LSNode)); 
	p->data = x;                     
	p->next = top->next;                              // 指针p所指向的节点的 下一个节点指针 指向了top节点的 下一个节点。
	top->next = p;                                    // 两行代码：指针p所指向的节点插入到top节点后面的位置
}


int StackPop(LSNode *top, DataType *x)                    // 出栈
{
	LSNode *p = top->next;                            // 找到 top节点 的指针
	if (p == NULL)
	{                              
		printf("堆栈已空，删除错误！！！\n");
		return 0;
	}
	top->next = p->next;                              // 指针 top 的 下一个节点，指向了 p 的 下一个节点，换言之，top节点向前移动了                                 
	*x = p->data;                                     // x指针保存 指向p的 数据域，
	free(p);                                          // 销毁结点
	return OK;
}


int StackGetTop(LSNode *top, DataType *x)                 // 获取 栈顶元素
{
	LSNode *p = top->next;                            // 栈顶元素就是 top结点的 下一个结点
	if (p == NULL)
	{
		printf("堆栈已空，取出错误！！！\n");
		return ERROR;
	}
	*x = p->data;                                     // x指针 保存 指向p的 数据域
	return OK;
}


void StackDestroy(LSNode **top)                           // 释放内存空间
{
	LSNode *p, *q;                              
	p = *top;
	while (p != NULL)                                 // 判断栈是否为空
	{
		q = p;                                    // p为top，也是栈顶         
		p = p->next;                              // p 指向 p的 下一结点
		free(q);                                  // 销毁q，换言之，它们都是通过指针域连接的
	}
	*top = NULL;                                      // 将top指向NULL
	printf("\n栈为空！！！");
}

int main()
{
	int i, x;
	LSNode *top;
	StackInit(&top);
	for (i = 0; i < 10; i++)
	{
		StackPush(top, i + 1);
	}
	StackGetTop(top, &x);
	printf("当前栈顶元素为%d\n", x);
	printf("依次出栈：");
	while (StackIsEmpty(top))
	{
		StackPop(top, &x);
		printf("%d\t", x);
	}
	StackDestroy(&top);
	return 0;
}
