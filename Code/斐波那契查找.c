//#include<stdio.h>
//#define ERROR -1
//
//int array[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
///* 쳲��������� */
//// n != MAXSIZE
////��������������ֵ��ȫʱ��
////���õ�a[n]��a[n]ӦΪһ���ڲ��ҵ��еĵ�ֵ��һ��ȷ����ֵ��,�� n = MAXSIZE����ֵ��ȷ��������Ҫ��
//int Fibonacci_Search(int* a, int n, int key) {
//	int F[100];    //쳲���������
//	F[0] = 0;
//	F[1] = 1;
//	for (int i = 2; i < 100; i++)
//		F[i] = F[i - 1] + F[i - 2];
//
//	int low, high, mid, k = 0;
//	low = 1;         //����±�
//	high = n;        //����±�
//
//	while (n > F[k] - 1)  //����nλ쳲��������е�λ��
//		k++;
//
//	for (int i = n; i < F[k] - 1; i++)   //����������ֵ����
//		a[i] = a[n];
//
//
//	while (low <= high) {
//		mid = low + F[k - 1] - 1;  //���㵱ǰ�ָ����±�
//		if (key < a[mid]) {        //����ֵС�ڵ�ǰ�ָ�ֵ
//			high = mid - 1;
//			k--;
//		}
//		else if (key > a[mid]) {     //����ֵ���ڵ�ǰ�ָ�ֵ
//			low = mid + 1;
//			k -= 2;
//		}
//		else {
//			if (mid <= n)
//				return mid;
//			else
//				return n;     //mid > n˵���ǲ�ȫ��ֵ������n
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