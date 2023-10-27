#include<stdio.h>

int array[] = { 1,2545,25,26,2,323,4562,7855,3822,3656,236,263,27,37,283,377,2542,23,232,32,138,345 };
int lenght = sizeof(array) / sizeof(array[0]);


int main() {
	for (int i = 0; i < lenght; i++) {
	 	int tem = array[i];
		int j = 0;
		for (; j < i; j++) { //每次从下标0开始，和下标i比较
			if (array[j] > tem) //如果array[i]小于tem，执行下方代码
			break;
		}
		for (int k = i - 1; k >= j; k--)//通过拿到的下标，数组向后移动              
			array[k + 1] = array[k];
		array[j] = tem;//插入
	}
	for (int i = 0; i < lenght; i++)
		printf("%d\t", array[i]);
	return 0;
}