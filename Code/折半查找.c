//#include<stdio.h>
//
//int array[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//
//int main() {
//	int s = 1;
//	int min = 0, max = sizeof(array) / sizeof(array[0]);
//	while (max > min) {
//		int mid = (max + min) / 2;
//		if (array[mid] == s) {
//			printf("找到了，在数组{%d}中", array[mid]);
//		}
//		if (s > array[mid])
//			min = mid;
//		else
//			max = mid;
//	}
//
//}