//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef struct node {
//	int num;	//������ 
//	struct node* next;	//ָ���� 
//}KeyNode;
//
//void bucket_sort(int a[], int size, int bucket_size) {
//	int i, j;        //���飬���鳤�ȣ�Ͱ�Ĵ�С
//
//	//���嶯̬��ָ������
//	KeyNode** bucket_num = (KeyNode**)malloc(bucket_size * sizeof(KeyNode*));
//
//	for (i = 0; i < bucket_size; i++)
//	{
//		bucket_num[i] = (KeyNode*)malloc(sizeof(KeyNode));//Ϊÿ��������ͷ��� 
//		bucket_num[i]->num = 0;
//		bucket_num[i]->next = NULL;   //ָ�������ʼ��Ϊ��
//	}
//
//	for (j = 0; j < size; j++) //׼������
//	{
//		KeyNode* node = (KeyNode*)malloc(sizeof(KeyNode));//����һ���ڵ� 
//		node->num = a[j];    //����������� 
//		node->next = NULL;	//ָ���
//
//		int index = a[j] / 100;  //ӳ�亯�� ����Ͱ��
//
//		KeyNode* p = bucket_num[index];//pָ�������ͷ
//
//		//����ṹ�Ĳ�������
//		while (p->next != NULL && p->next->num <= node->num)
//		{
//			p = p->next;	//1.����Ϊ�գ�p->next==NULL�����벻��ѭ�� 
//		}					//2.����Ϊ�գ���Ϊ������޿�ʼ��˳����룬����Ϊ����ģ�
//							//�����ҵ�    ǰһ���ڵ� <= node <=��һ���ڵ�
//
//		//�ڵ�������� 
//		node->next = p->next;
//		p->next = node;
//		(bucket_num[index]->num)++;	//��¼һ�¸��������м�����Ч�ڵ� 
//
//	}
//	//��ӡ���
//	KeyNode* k = NULL;  //����һ���յĽṹ��ָ�����ڴ���������
//	for (i = 0; i < bucket_size; i++)
//	{
//		//for(k = bucket_num[i]->next;k!=NULL;k=k->next)//ͨ�����һ��ָ��ָ���
//		k = bucket_num[i]->next;
//		for (int m = 0; m < bucket_num[i]->num; m++)   //ͨ��ͷָ���¼�ڵ���
//		{
//			printf("%d ", k->num);
//			k = k->next;
//
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	int a[20];
//
//	for (int i = 0; i < 20; i++){
//		a[i] = rand() % 1000;	//�����鸳����� 
//		printf("%d ", a[i]);
//	}
//	puts("");
//	puts("");
//	int size = sizeof(a) / sizeof(int);    //�������鳤��
//	bucket_sort(a, size, 10);//�����������鳤�ȣ�Ͱ�ĸ��� 
//}