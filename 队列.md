#include <stdio.h>
#include <stdlib.h>

typedef struct QNode{                                // 定义一个结构体数据
    int data;                                        // 数据域
    struct QNode* next;                              // 指针域
}QNode;                                              // struct QNode 的别名
      
QNode *initQueue()                                   // 定义一个指向 Qnode型 的 指针函数
{                                                    // 头结点与结点
    QNode *queue = malloc(sizeof(QNode));            // 使用 malloc 函数为 *queue 分配空间
    queue->next = NULL;                              // 使 *next 指针为 NULL
    return queue;                                    // 返回 的是一个 指针
}

                                                   
QNode *enQueue(QNode* rear,int data)                 // 入队
{
    QNode *enElem = malloc(sizeof(QNode));           // 从 结尾元素 开始
    enElem->data = data;                             // 结尾元素 为 1
    enElem->next = NULL;                             // 结尾元素 next 为 NULL
    rear->next = enElem;                             // 尾指针 的指针域 指向 新结点
    rear = enElem;                                   // 尾指针 指向 新结点
    return rear;                                     // 返回新的 尾指针
}


void deQueue(QNode* top,QNode** rear)                // 出队（二级指针，在函数中更改指针的指向不能直接更改，要使用指向指针的指针）
{
    QNode *p = NULL;                                 // 创建新的 结构体指针 p
    if(top->next == NULL){                           // 通过判断头结点 的 指针域 是否为空 来判读队列是否为空
        printf("队列为空 ");
        return;
    }
    p = top->next;                                   // 赋值
    printf("%d ",p->data);                           // 打印
    top->next = p->next;                             // 删除结点
    if(*rear == p){                                  // 判断删除的 是否 是最后一个结点，如果是的话，rear指向头结点，避免 rear 成为野指针
        *rear = top;
      }
    free(p);                                         //销毁p
}

int main()
{
    QNode *top = NULL, *rear = NULL;                // 队头指针 和 队尾指针初始化
    top  = rear = initQueue();                      // 队头指针 和 队尾指针 指向头结点
                                                    // 入栈
    rear = enQueue(rear,1);                         // 传入的数据是queue
    rear = enQueue(rear,2);
                                                    // 出栈
    deQueue(top, &rear);                            // 1
    deQueue(top, &rear);                            // 2
                                                    // 没有元素，看会显示什么
    deQueue(top, &rear);
                                                    // 入栈
    rear = enQueue(rear,4);
    rear = enQueue(rear,5);
    rear = enQueue(rear,6);
                                                    // 出栈
    deQueue(top, &rear);                            // 4
    deQueue(top, &rear);                            // 5

    return 0;
}
