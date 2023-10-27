//#include<stdio.h>
//
//int array[] = { 1,2545,25,26,2,323,4562,7855,3822,3656,236,263,27,37,283,377,2542,23,232,32,138,345 };
//int lenght = sizeof(array) / sizeof(array[0]);
//
//void main(void) {
//
//	for (int i = 0; i < lenght; i++) {
//		int min = i;
//		for (int j = i + 1; j < lenght; j++) {
//			if (array[j] < array[min])
//				min = j;
//		}
//		int tmp = array[i];
//		array[i] = array[min];
//		array[min] = tmp;
//	}
//	for (int i = 0; i < lenght; i++)
//		printf("%d\t", array[i]);
//}