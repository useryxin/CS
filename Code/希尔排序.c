//#include<stdio.h>
//
//int array[] = { 1,2545,25,26,2,1,1323,4562,7855,3822,3656,236,263,27,37,283,377,2542,23,232,32,138,345 };
//int lenght = sizeof(array) / sizeof(array[0]);
//
//int main() {
//	int jmp = lenght / 2;	//找出基准数据
//	while (jmp != 0) {      //判断数组是否为空
//		for (int i = jmp; i < lenght; i++) {
//			int tmp = array[i];
//			int j = i - jmp;
//			while (j >= 0 && tmp < array[j]) {
//				array[j + jmp] = array[j];
//				j = j - jmp;
//			}
//			array[jmp + j] = tmp;
//		}
//		jmp = jmp / 2;
//	}
//
//	for (int i = 0; i < lenght; i++) {
//		printf("%d\t", array[i]);
//	}
//}