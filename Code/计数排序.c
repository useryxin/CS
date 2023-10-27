//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////计数排序(优化后)
//void CountSort(int* arr, int n){
//	//找到序列中的最大值和最小值
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < n; i++){
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	int range = max - min + 1;//开辟空间的数量
//	int* countArr = (int*)malloc(sizeof(int) * range);//开辟空间
//	//初始化数组全部为0
//	memset(countArr, 0, sizeof(int) * range);
//	//开始计数
//	for (int i = 0; i < n; i++)
//		countArr[arr[i] - min]++;
//	
//
//	//开始排序
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
