//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////��������(�Ż���)
//void CountSort(int* arr, int n){
//	//�ҵ������е����ֵ����Сֵ
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < n; i++){
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	int range = max - min + 1;//���ٿռ������
//	int* countArr = (int*)malloc(sizeof(int) * range);//���ٿռ�
//	//��ʼ������ȫ��Ϊ0
//	memset(countArr, 0, sizeof(int) * range);
//	//��ʼ����
//	for (int i = 0; i < n; i++)
//		countArr[arr[i] - min]++;
//	
//
//	//��ʼ����
//	int j = 0;
//	for (int i = 0; i < range; i++){
//		while (countArr[i]--){
//			arr[j] = i + min;
//			j++;
//		}
//	}
//	free(countArr);
//}
//
//void Print(int* arr, int n){
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	
//}
//
//void test(){
//	int arr[] = { -5,8,5,4,6,8,9,7,2,3,4,5 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	CountSort(arr, n);
//	Print(arr, n);
//}
//
//int main(){
//	test();
//	return 0;
//}
