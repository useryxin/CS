//#include<stdio.h>
//
//int array[] = { 1,4,45,34,88,99,3,99,77,323,2,1,2545,25,26,2,323,4562,7855,3822,3656,236,263,27,37,283,377,2542,23,232,32,138,345 };
//int lenght = sizeof(array) / sizeof(array[0]);
//
//int main() {
//	for (int i = 0; i < lenght; i++) {
//		for (int j = i + 1; j < lenght; j++)
//
//			if (array[i] == array[j])
//				continue;
//			else if (array[i] > array[j])
//				continue;
//			else if (array[i] < array[j]) {
//				int max = array[i];
//				array[i] = array[j];
//				array[j] = max;
//			}
//		}
//
//	//在最坏的情况下，时间复杂度为(2^n)
//	int j=0;
//	while (j < lenght) {
//		printf("%d\n", array[j]);
//		j++;
//	}
//	return 0;
//}