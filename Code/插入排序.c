#include<stdio.h>

int array[] = { 1,2545,25,26,2,323,4562,7855,3822,3656,236,263,27,37,283,377,2542,23,232,32,138,345 };
int lenght = sizeof(array) / sizeof(array[0]);


int main() {
	for (int i = 0; i < lenght; i++) {
	 	int tem = array[i];
		int j = 0;
		for (; j < i; j++) { //ÿ�δ��±�0��ʼ�����±�i�Ƚ�
			if (array[j] > tem) //���array[i]С��tem��ִ���·�����
			break;
		}
		for (int k = i - 1; k >= j; k--)//ͨ���õ����±꣬��������ƶ�              
			array[k + 1] = array[k];
		array[j] = tem;//����
	}
	for (int i = 0; i < lenght; i++)
		printf("%d\t", array[i]);
	return 0;
}