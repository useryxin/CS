//#include<stdio.h>
//#define ERROR -1
//
//int array[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
///* 斐波那契查找 */
//// n != MAXSIZE
////后续将不满的数值补全时，
////需用到a[n]（a[n]应为一个在查找当中的的值，一个确定的值）,若 n = MAXSIZE，该值不确定，不符要求
//int Fibonacci_Search(int* a, int n, int key) {
//	int F[100];    //斐波那契数列
//	F[0] = 0;
//	F[1] = 1;
//	for (int i = 2; i < 100; i++)
//		F[i] = F[i - 1] + F[i - 2];
//
//	int low, high, mid, k = 0;
//	low = 1;         //最低下标
//	high = n;        //最高下标
//
//	while (n > F[k] - 1)  //计算n位斐波那契数列的位置
//		k++;
//
//	for (int i = n; i < F[k] - 1; i++)   //将不满的数值补齐
//		a[i] = a[n];
//
//
//	while (low <= high) {
//		mid = low + F[k - 1] - 1;  //计算当前分隔的下标
//		if (key < a[mid]) {        //查找值小于当前分隔值
//			high = mid - 1;
//			k--;
//		}
//		else if (key > a[mid]) {     //查找值大于当前分隔值
//			low = mid + 1;
//			k -= 2;
//		}
//		else {
//			if (mid <= n)
//				return mid;
//			else
//				return n;     //mid > n说明是补全数值，返回n
//		}
//	}
//	return ERROR;
//}
//
//
//void main() {
//	int s = Fibonacci_Search(array, 15, 10);
//	printf("%d", s);
//}